section .data
    hello db "Hello, Holberton",10
    hello_len equ $ - hello

section .text
    global main

    extern printf

main:
    sub rsp, 8  ; Align the stack

    lea rdi, [rel hello]
    call printf

    add rsp, 8  ; Restore the stack

    ; Exit the program
    mov eax, 60
    xor edi, edi
    syscall
