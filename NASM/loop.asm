section .data
msg1: db "Enter number: ",
len1: equ $-msg1

msg2: db "Numbers are: ",10
len2: equ $-msg2

section .bss
abc: resb 100
count: resb 10

section .text
gloabl main
main:

mov esi,abc
mov byte[count],10

up:
mov eax,4
mov ebx,1
mov ecx,msg1
mov edx,len1
int 0x80
