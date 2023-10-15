#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>

/**
 *print_all - prints anything.
 *@format: a list of types of arguments passed to the function.
 *
 *Return: Void.
 */
void print_all(const char *const format, ...)
{
	va_list args;
	char str[3], *_format, *arg;

	str[0] = '%';
	str[2] = '\0';
	_format = format;
	va_start(args, format);
	while (*_format != '\0')
	{
		while (
		*_format == 'c' || *_format == 'i' ||
		*_format == 'f' || *_format == 's'
		)
		{
			arg = va_arg(args, char *);
			str[1] = *_format;
			if (_format != format)
				printf(", ");
			if (arg == NULL)
				arg = strdup("(nil)");

			printf(str, arg);
			break;
		}

		_format++;
	}

	printf("\n");
	va_end(args);
}
