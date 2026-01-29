section .data
    msg db "Hello, World!", 10
    len equ $-msg

section .text
    global _start

_start:
    mov rax, 1          ; syscall: write
    mov rdi, 1          ; file descriptor: stdout
    mov rsi, msg        ; pointer to message
    mov rdx, len        ; message length
    syscall              ; invoke operating system to do the write  

    mov rax, 60         ; syscall: exit
    xor rdi, rdi        ; exit code 0
    syscall              ; invoke operating system to exit  