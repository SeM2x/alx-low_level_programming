
crackme2:     file format elf64-x86-64


Disassembly of section .init:

0000000000400698 <_init>:
  400698:	48 83 ec 08          	sub    rsp,0x8
  40069c:	48 8b 05 55 09 20 00 	mov    rax,QWORD PTR [rip+0x200955]        # 600ff8 <__gmon_start__>
  4006a3:	48 85 c0             	test   rax,rax
  4006a6:	74 05                	je     4006ad <_init+0x15>
  4006a8:	e8 c3 00 00 00       	call   400770 <__gmon_start__@plt>
  4006ad:	48 83 c4 08          	add    rsp,0x8
  4006b1:	c3                   	ret    

Disassembly of section .plt:

00000000004006c0 <.plt>:
  4006c0:	ff 35 42 09 20 00    	push   QWORD PTR [rip+0x200942]        # 601008 <_GLOBAL_OFFSET_TABLE_+0x8>
  4006c6:	ff 25 44 09 20 00    	jmp    QWORD PTR [rip+0x200944]        # 601010 <_GLOBAL_OFFSET_TABLE_+0x10>
  4006cc:	0f 1f 40 00          	nop    DWORD PTR [rax+0x0]

00000000004006d0 <MD5_Init@plt>:
  4006d0:	ff 25 42 09 20 00    	jmp    QWORD PTR [rip+0x200942]        # 601018 <MD5_Init@OPENSSL_1.0.0>
  4006d6:	68 00 00 00 00       	push   0x0
  4006db:	e9 e0 ff ff ff       	jmp    4006c0 <.plt>

00000000004006e0 <MD5_Update@plt>:
  4006e0:	ff 25 3a 09 20 00    	jmp    QWORD PTR [rip+0x20093a]        # 601020 <MD5_Update@OPENSSL_1.0.0>
  4006e6:	68 01 00 00 00       	push   0x1
  4006eb:	e9 d0 ff ff ff       	jmp    4006c0 <.plt>

00000000004006f0 <puts@plt>:
  4006f0:	ff 25 32 09 20 00    	jmp    QWORD PTR [rip+0x200932]        # 601028 <puts@GLIBC_2.2.5>
  4006f6:	68 02 00 00 00       	push   0x2
  4006fb:	e9 c0 ff ff ff       	jmp    4006c0 <.plt>

0000000000400700 <strncmp@plt>:
  400700:	ff 25 2a 09 20 00    	jmp    QWORD PTR [rip+0x20092a]        # 601030 <strncmp@GLIBC_2.2.5>
  400706:	68 03 00 00 00       	push   0x3
  40070b:	e9 b0 ff ff ff       	jmp    4006c0 <.plt>

0000000000400710 <__libc_start_main@plt>:
  400710:	ff 25 22 09 20 00    	jmp    QWORD PTR [rip+0x200922]        # 601038 <__libc_start_main@GLIBC_2.2.5>
  400716:	68 04 00 00 00       	push   0x4
  40071b:	e9 a0 ff ff ff       	jmp    4006c0 <.plt>

0000000000400720 <strlen@plt>:
  400720:	ff 25 1a 09 20 00    	jmp    QWORD PTR [rip+0x20091a]        # 601040 <strlen@GLIBC_2.2.5>
  400726:	68 05 00 00 00       	push   0x5
  40072b:	e9 90 ff ff ff       	jmp    4006c0 <.plt>

0000000000400730 <sprintf@plt>:
  400730:	ff 25 12 09 20 00    	jmp    QWORD PTR [rip+0x200912]        # 601048 <sprintf@GLIBC_2.2.5>
  400736:	68 06 00 00 00       	push   0x6
  40073b:	e9 80 ff ff ff       	jmp    4006c0 <.plt>

0000000000400740 <MD5_Final@plt>:
  400740:	ff 25 0a 09 20 00    	jmp    QWORD PTR [rip+0x20090a]        # 601050 <MD5_Final@OPENSSL_1.0.0>
  400746:	68 07 00 00 00       	push   0x7
  40074b:	e9 70 ff ff ff       	jmp    4006c0 <.plt>

0000000000400750 <__stack_chk_fail@plt>:
  400750:	ff 25 02 09 20 00    	jmp    QWORD PTR [rip+0x200902]        # 601058 <__stack_chk_fail@GLIBC_2.4>
  400756:	68 08 00 00 00       	push   0x8
  40075b:	e9 60 ff ff ff       	jmp    4006c0 <.plt>

0000000000400760 <strcmp@plt>:
  400760:	ff 25 fa 08 20 00    	jmp    QWORD PTR [rip+0x2008fa]        # 601060 <strcmp@GLIBC_2.2.5>
  400766:	68 09 00 00 00       	push   0x9
  40076b:	e9 50 ff ff ff       	jmp    4006c0 <.plt>

Disassembly of section .plt.got:

0000000000400770 <__gmon_start__@plt>:
  400770:	ff 25 82 08 20 00    	jmp    QWORD PTR [rip+0x200882]        # 600ff8 <__gmon_start__>
  400776:	66 90                	xchg   ax,ax

Disassembly of section .text:

0000000000400780 <_start>:
  400780:	31 ed                	xor    ebp,ebp
  400782:	49 89 d1             	mov    r9,rdx
  400785:	5e                   	pop    rsi
  400786:	48 89 e2             	mov    rdx,rsp
  400789:	48 83 e4 f0          	and    rsp,0xfffffffffffffff0
  40078d:	50                   	push   rax
  40078e:	54                   	push   rsp
  40078f:	49 c7 c0 d0 0a 40 00 	mov    r8,0x400ad0
  400796:	48 c7 c1 60 0a 40 00 	mov    rcx,0x400a60
  40079d:	48 c7 c7 76 08 40 00 	mov    rdi,0x400876
  4007a4:	e8 67 ff ff ff       	call   400710 <__libc_start_main@plt>
  4007a9:	f4                   	hlt    
  4007aa:	66 0f 1f 44 00 00    	nop    WORD PTR [rax+rax*1+0x0]

00000000004007b0 <deregister_tm_clones>:
  4007b0:	b8 7f 10 60 00       	mov    eax,0x60107f
  4007b5:	55                   	push   rbp
  4007b6:	48 2d 78 10 60 00    	sub    rax,0x601078
  4007bc:	48 83 f8 0e          	cmp    rax,0xe
  4007c0:	48 89 e5             	mov    rbp,rsp
  4007c3:	76 1b                	jbe    4007e0 <deregister_tm_clones+0x30>
  4007c5:	b8 00 00 00 00       	mov    eax,0x0
  4007ca:	48 85 c0             	test   rax,rax
  4007cd:	74 11                	je     4007e0 <deregister_tm_clones+0x30>
  4007cf:	5d                   	pop    rbp
  4007d0:	bf 78 10 60 00       	mov    edi,0x601078
  4007d5:	ff e0                	jmp    rax
  4007d7:	66 0f 1f 84 00 00 00 	nop    WORD PTR [rax+rax*1+0x0]
  4007de:	00 00 
  4007e0:	5d                   	pop    rbp
  4007e1:	c3                   	ret    
  4007e2:	0f 1f 40 00          	nop    DWORD PTR [rax+0x0]
  4007e6:	66 2e 0f 1f 84 00 00 	nop    WORD PTR cs:[rax+rax*1+0x0]
  4007ed:	00 00 00 

00000000004007f0 <register_tm_clones>:
  4007f0:	be 78 10 60 00       	mov    esi,0x601078
  4007f5:	55                   	push   rbp
  4007f6:	48 81 ee 78 10 60 00 	sub    rsi,0x601078
  4007fd:	48 c1 fe 03          	sar    rsi,0x3
  400801:	48 89 e5             	mov    rbp,rsp
  400804:	48 89 f0             	mov    rax,rsi
  400807:	48 c1 e8 3f          	shr    rax,0x3f
  40080b:	48 01 c6             	add    rsi,rax
  40080e:	48 d1 fe             	sar    rsi,1
  400811:	74 15                	je     400828 <register_tm_clones+0x38>
  400813:	b8 00 00 00 00       	mov    eax,0x0
  400818:	48 85 c0             	test   rax,rax
  40081b:	74 0b                	je     400828 <register_tm_clones+0x38>
  40081d:	5d                   	pop    rbp
  40081e:	bf 78 10 60 00       	mov    edi,0x601078
  400823:	ff e0                	jmp    rax
  400825:	0f 1f 00             	nop    DWORD PTR [rax]
  400828:	5d                   	pop    rbp
  400829:	c3                   	ret    
  40082a:	66 0f 1f 44 00 00    	nop    WORD PTR [rax+rax*1+0x0]

0000000000400830 <__do_global_dtors_aux>:
  400830:	80 3d 41 08 20 00 00 	cmp    BYTE PTR [rip+0x200841],0x0        # 601078 <__TMC_END__>
  400837:	75 11                	jne    40084a <__do_global_dtors_aux+0x1a>
  400839:	55                   	push   rbp
  40083a:	48 89 e5             	mov    rbp,rsp
  40083d:	e8 6e ff ff ff       	call   4007b0 <deregister_tm_clones>
  400842:	5d                   	pop    rbp
  400843:	c6 05 2e 08 20 00 01 	mov    BYTE PTR [rip+0x20082e],0x1        # 601078 <__TMC_END__>
  40084a:	f3 c3                	repz ret 
  40084c:	0f 1f 40 00          	nop    DWORD PTR [rax+0x0]

0000000000400850 <frame_dummy>:
  400850:	bf 10 0e 60 00       	mov    edi,0x600e10
  400855:	48 83 3f 00          	cmp    QWORD PTR [rdi],0x0
  400859:	75 05                	jne    400860 <frame_dummy+0x10>
  40085b:	eb 93                	jmp    4007f0 <register_tm_clones>
  40085d:	0f 1f 00             	nop    DWORD PTR [rax]
  400860:	b8 00 00 00 00       	mov    eax,0x0
  400865:	48 85 c0             	test   rax,rax
  400868:	74 f1                	je     40085b <frame_dummy+0xb>
  40086a:	55                   	push   rbp
  40086b:	48 89 e5             	mov    rbp,rsp
  40086e:	ff d0                	call   rax
  400870:	5d                   	pop    rbp
  400871:	e9 7a ff ff ff       	jmp    4007f0 <register_tm_clones>

0000000000400876 <main>:
  400876:	55                   	push   rbp
  400877:	48 89 e5             	mov    rbp,rsp
  40087a:	48 81 ec d0 00 00 00 	sub    rsp,0xd0
  400881:	89 bd 4c ff ff ff    	mov    DWORD PTR [rbp-0xb4],edi
  400887:	48 89 b5 40 ff ff ff 	mov    QWORD PTR [rbp-0xc0],rsi
  40088e:	48 89 95 38 ff ff ff 	mov    QWORD PTR [rbp-0xc8],rdx
  400895:	64 48 8b 04 25 28 00 	mov    rax,QWORD PTR fs:0x28
  40089c:	00 00 
  40089e:	48 89 45 f8          	mov    QWORD PTR [rbp-0x8],rax
  4008a2:	31 c0                	xor    eax,eax
  4008a4:	48 c7 45 d0 00 00 00 	mov    QWORD PTR [rbp-0x30],0x0
  4008ab:	00 
  4008ac:	48 c7 45 d8 00 00 00 	mov    QWORD PTR [rbp-0x28],0x0
  4008b3:	00 
  4008b4:	48 c7 45 e0 00 00 00 	mov    QWORD PTR [rbp-0x20],0x0
  4008bb:	00 
  4008bc:	48 c7 45 e8 00 00 00 	mov    QWORD PTR [rbp-0x18],0x0
  4008c3:	00 
  4008c4:	c6 45 f0 00          	mov    BYTE PTR [rbp-0x10],0x0
  4008c8:	48 c7 85 58 ff ff ff 	mov    QWORD PTR [rbp-0xa8],0x0
  4008cf:	00 00 00 00 
  4008d3:	83 bd 4c ff ff ff 01 	cmp    DWORD PTR [rbp-0xb4],0x1
  4008da:	74 4f                	je     40092b <main+0xb5>
  4008dc:	bf e8 0a 40 00       	mov    edi,0x400ae8
  4008e1:	e8 0a fe ff ff       	call   4006f0 <puts@plt>
  4008e6:	b8 01 00 00 00       	mov    eax,0x1
  4008eb:	e9 4b 01 00 00       	jmp    400a3b <main+0x1c5>
  4008f0:	48 8b 85 38 ff ff ff 	mov    rax,QWORD PTR [rbp-0xc8]
  4008f7:	48 8b 00             	mov    rax,QWORD PTR [rax]
  4008fa:	ba 14 00 00 00       	mov    edx,0x14
  4008ff:	be f6 0a 40 00       	mov    esi,0x400af6
  400904:	48 89 c7             	mov    rdi,rax
  400907:	e8 f4 fd ff ff       	call   400700 <strncmp@plt>
  40090c:	85 c0                	test   eax,eax
  40090e:	75 13                	jne    400923 <main+0xad>
  400910:	48 8b 85 38 ff ff ff 	mov    rax,QWORD PTR [rbp-0xc8]
  400917:	48 8b 00             	mov    rax,QWORD PTR [rax]
  40091a:	48 89 85 58 ff ff ff 	mov    QWORD PTR [rbp-0xa8],rax
  400921:	eb 17                	jmp    40093a <main+0xc4>
  400923:	48 83 85 38 ff ff ff 	add    QWORD PTR [rbp-0xc8],0x8
  40092a:	08 
  40092b:	48 8b 85 38 ff ff ff 	mov    rax,QWORD PTR [rbp-0xc8]
  400932:	48 8b 00             	mov    rax,QWORD PTR [rax]
  400935:	48 85 c0             	test   rax,rax
  400938:	75 b6                	jne    4008f0 <main+0x7a>
  40093a:	48 83 bd 58 ff ff ff 	cmp    QWORD PTR [rbp-0xa8],0x0
  400941:	00 
  400942:	75 14                	jne    400958 <main+0xe2>
  400944:	bf e8 0a 40 00       	mov    edi,0x400ae8
  400949:	e8 a2 fd ff ff       	call   4006f0 <puts@plt>
  40094e:	b8 01 00 00 00       	mov    eax,0x1
  400953:	e9 e3 00 00 00       	jmp    400a3b <main+0x1c5>
  400958:	48 83 85 58 ff ff ff 	add    QWORD PTR [rbp-0xa8],0x14
  40095f:	14 
  400960:	48 8d 85 60 ff ff ff 	lea    rax,[rbp-0xa0]
  400967:	48 89 c7             	mov    rdi,rax
  40096a:	e8 61 fd ff ff       	call   4006d0 <MD5_Init@plt>
  40096f:	48 8b 85 58 ff ff ff 	mov    rax,QWORD PTR [rbp-0xa8]
  400976:	48 89 c7             	mov    rdi,rax
  400979:	e8 a2 fd ff ff       	call   400720 <strlen@plt>
  40097e:	48 89 c2             	mov    rdx,rax
  400981:	48 8b 8d 58 ff ff ff 	mov    rcx,QWORD PTR [rbp-0xa8]
  400988:	48 8d 85 60 ff ff ff 	lea    rax,[rbp-0xa0]
  40098f:	48 89 ce             	mov    rsi,rcx
  400992:	48 89 c7             	mov    rdi,rax
  400995:	e8 46 fd ff ff       	call   4006e0 <MD5_Update@plt>
  40099a:	48 8d 95 60 ff ff ff 	lea    rdx,[rbp-0xa0]
  4009a1:	48 8d 45 c0          	lea    rax,[rbp-0x40]
  4009a5:	48 89 d6             	mov    rsi,rdx
  4009a8:	48 89 c7             	mov    rdi,rax
  4009ab:	e8 90 fd ff ff       	call   400740 <MD5_Final@plt>
  4009b0:	c7 85 54 ff ff ff 00 	mov    DWORD PTR [rbp-0xac],0x0
  4009b7:	00 00 00 
  4009ba:	eb 3d                	jmp    4009f9 <main+0x183>
  4009bc:	8b 85 54 ff ff ff    	mov    eax,DWORD PTR [rbp-0xac]
  4009c2:	48 98                	cdqe   
  4009c4:	0f b6 44 05 c0       	movzx  eax,BYTE PTR [rbp+rax*1-0x40]
  4009c9:	0f b6 c0             	movzx  eax,al
  4009cc:	8b 95 54 ff ff ff    	mov    edx,DWORD PTR [rbp-0xac]
  4009d2:	01 d2                	add    edx,edx
  4009d4:	48 8d 4d d0          	lea    rcx,[rbp-0x30]
  4009d8:	48 63 d2             	movsxd rdx,edx
  4009db:	48 01 d1             	add    rcx,rdx
  4009de:	89 c2                	mov    edx,eax
  4009e0:	be 0b 0b 40 00       	mov    esi,0x400b0b
  4009e5:	48 89 cf             	mov    rdi,rcx
  4009e8:	b8 00 00 00 00       	mov    eax,0x0
  4009ed:	e8 3e fd ff ff       	call   400730 <sprintf@plt>
  4009f2:	83 85 54 ff ff ff 01 	add    DWORD PTR [rbp-0xac],0x1
  4009f9:	83 bd 54 ff ff ff 0f 	cmp    DWORD PTR [rbp-0xac],0xf
  400a00:	7e ba                	jle    4009bc <main+0x146>
  400a02:	c6 45 f0 00          	mov    BYTE PTR [rbp-0x10],0x0
  400a06:	48 8d 45 d0          	lea    rax,[rbp-0x30]
  400a0a:	48 89 c6             	mov    rsi,rax
  400a0d:	bf 10 0b 40 00       	mov    edi,0x400b10
  400a12:	e8 49 fd ff ff       	call   400760 <strcmp@plt>
  400a17:	85 c0                	test   eax,eax
  400a19:	75 11                	jne    400a1b <main+0x1b6>
  400a1b:	bf 31 0b 40 00       	mov    edi,0x400b31
  400a20:	e8 cb fc ff ff       	call   4006f0 <puts@plt>
  400a25:	b8 00 00 00 00       	mov    eax,0x0
  400a2a:	eb 0f                	jmp    400a3b <main+0x1c5>
  400a2c:	bf e8 0a 40 00       	mov    edi,0x400ae8
  400a31:	e8 ba fc ff ff       	call   4006f0 <puts@plt>
  400a36:	b8 01 00 00 00       	mov    eax,0x1
  400a3b:	48 8b 4d f8          	mov    rcx,QWORD PTR [rbp-0x8]
  400a3f:	64 48 33 0c 25 28 00 	xor    rcx,QWORD PTR fs:0x28
  400a46:	00 00 
  400a48:	74 05                	je     400a4f <main+0x1d9>
  400a4a:	e8 01 fd ff ff       	call   400750 <__stack_chk_fail@plt>
  400a4f:	c9                   	leave  
  400a50:	c3                   	ret    
  400a51:	66 2e 0f 1f 84 00 00 	nop    WORD PTR cs:[rax+rax*1+0x0]
  400a58:	00 00 00 
  400a5b:	0f 1f 44 00 00       	nop    DWORD PTR [rax+rax*1+0x0]

0000000000400a60 <__libc_csu_init>:
  400a60:	41 57                	push   r15
  400a62:	41 56                	push   r14
  400a64:	41 89 ff             	mov    r15d,edi
  400a67:	41 55                	push   r13
  400a69:	41 54                	push   r12
  400a6b:	4c 8d 25 8e 03 20 00 	lea    r12,[rip+0x20038e]        # 600e00 <__frame_dummy_init_array_entry>
  400a72:	55                   	push   rbp
  400a73:	48 8d 2d 8e 03 20 00 	lea    rbp,[rip+0x20038e]        # 600e08 <__do_global_dtors_aux_fini_array_entry>
  400a7a:	53                   	push   rbx
  400a7b:	49 89 f6             	mov    r14,rsi
  400a7e:	49 89 d5             	mov    r13,rdx
  400a81:	4c 29 e5             	sub    rbp,r12
  400a84:	48 83 ec 08          	sub    rsp,0x8
  400a88:	48 c1 fd 03          	sar    rbp,0x3
  400a8c:	e8 07 fc ff ff       	call   400698 <_init>
  400a91:	48 85 ed             	test   rbp,rbp
  400a94:	74 20                	je     400ab6 <__libc_csu_init+0x56>
  400a96:	31 db                	xor    ebx,ebx
  400a98:	0f 1f 84 00 00 00 00 	nop    DWORD PTR [rax+rax*1+0x0]
  400a9f:	00 
  400aa0:	4c 89 ea             	mov    rdx,r13
  400aa3:	4c 89 f6             	mov    rsi,r14
  400aa6:	44 89 ff             	mov    edi,r15d
  400aa9:	41 ff 14 dc          	call   QWORD PTR [r12+rbx*8]
  400aad:	48 83 c3 01          	add    rbx,0x1
  400ab1:	48 39 eb             	cmp    rbx,rbp
  400ab4:	75 ea                	jne    400aa0 <__libc_csu_init+0x40>
  400ab6:	48 83 c4 08          	add    rsp,0x8
  400aba:	5b                   	pop    rbx
  400abb:	5d                   	pop    rbp
  400abc:	41 5c                	pop    r12
  400abe:	41 5d                	pop    r13
  400ac0:	41 5e                	pop    r14
  400ac2:	41 5f                	pop    r15
  400ac4:	c3                   	ret    
  400ac5:	90                   	nop
  400ac6:	66 2e 0f 1f 84 00 00 	nop    WORD PTR cs:[rax+rax*1+0x0]
  400acd:	00 00 00 

0000000000400ad0 <__libc_csu_fini>:
  400ad0:	f3 c3                	repz ret 

Disassembly of section .fini:

0000000000400ad4 <_fini>:
  400ad4:	48 83 ec 08          	sub    rsp,0x8
  400ad8:	48 83 c4 08          	add    rsp,0x8
  400adc:	c3                   	ret    
