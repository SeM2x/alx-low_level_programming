#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdint.h>
#define BUFF_SIZE 64

typedef struct
{
	unsigned char magic[4];
	uint8_t class;
	uint8_t data;
	uint8_t version;
	uint8_t osabi;
	uint8_t abiversion;
	uint8_t pad[7];
	uint16_t type;
	uint16_t machine;
	uint32_t version2;
	uint32_t entry;
	uint32_t phoff;
	uint32_t shoff;
	uint32_t flags;
	uint16_t ehsize;
	uint16_t phentsize;
	uint16_t phnum;
	uint16_t shentsize;
	uint16_t shnum;
	uint16_t shstrndx;
}

ElfHeader;

void print_elf_header_info(ElfHeader header)
{
	printf("Magic:   %02x %02x %02x %02x\n", header.magic[0], header.magic[1], header.magic[2], header.magic[3]);
	printf("Class:                             %d-bit\n", header.class == 1 ? 32 : 64);
	printf("Data:                              %s\n", header.data == 1 ? "2's complement, little endian" : "2's complement, big endian");
	printf("Version:                           %d (current)\n", header.version);
	printf("OS/ABI:                            UNIX - ");
	switch (header.osabi)
	{
		case 0:
			printf("System V\n");
			break;
		case 1:
			printf("HP-UX\n");
			break;
		case 2:
			printf("NetBSD\n");
			break;
		case 3:
			printf("Linux\n");
			break;
		case 6:
			printf("Solaris\n");
			break;
		case 7:
			printf("AIX\n");
			break;
		case 8:
			printf("IRIX\n");
			break;
		case 9:
			printf("FreeBSD\n");
			break;
		case 12:
			printf("OpenBSD\n");
			break;
		default:
			printf("Unknown\n");
	}

	printf("ABI Version:                       %d\n", header.abiversion);
	printf("Type:                              ");
	switch (header.type)
	{
		case 1:
			printf("REL (Relocatable file)\n");
			break;
		case 2:
			printf("EXEC (Executable file)\n");
			break;
		case 3:
			printf("DYN (Shared object file)\n");
			break;
		case 4:
			printf("CORE (Core file)\n");
			break;
		default:
			printf("Unknown\n");
	}

	printf("Entry point address:               0x%x\n", header.entry);
}

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		return 98;
	}

	int fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		perror("open");
		return 98;
	}

	ElfHeader header;
	if (read(fd, &header, sizeof(header)) != sizeof(header))
	{
		fprintf(stderr, "read: Error reading ELF header\n");
		close(fd);
		return 98;
	}

	if (header.magic[0] != 0x7F || header.magic[1] != 'E' || header.magic[2] != 'L' || header.magic[3] != 'F')
	{
		fprintf(stderr, "Not an ELF file\n");
		close(fd);
		return 98;
	}

	print_elf_header_info(header);

	close(fd);
	return 0;
}
