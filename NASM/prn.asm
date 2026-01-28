section .data
    msg1 db "Enter your roll number: "
    len1 equ $-msg1

    msg2 db "Your roll number is: "
    len2 equ $-msg2

section .bss
    roll resb 20

section .text
    global _start

_start:
    ; print "Enter your roll number"
    mov eax, 4        ; sys_write
    mov ebx, 1        ; stdout
    mov ecx, msg1
    mov edx, len1
    int 0x80

    ; read roll number
    mov eax, 3        ; sys_read
    mov ebx, 0        ; stdin
    mov ecx, roll
    mov edx, 20
    int 0x80
    mov esi, eax      ; store number of bytes read

    ; print "Your roll number is"
    mov eax, 4
    mov ebx, 1
    mov ecx, msg2
    mov edx, len2
    int 0x80

    ; print roll number
    mov eax, 4
    mov ebx, 1
    mov ecx, roll
    mov edx, esi
    int 0x80

    ; exit
    mov eax, 1        ; sys_exit
    xor ebx, ebx
    int 0x80

