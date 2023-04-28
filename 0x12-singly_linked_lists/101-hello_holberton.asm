section .data
    msg db 'Hello, Holberton', 0xa, 0

section .text
    global main
    extern printf

main:
    mov edi, msg    ; load address of message into edi
    xor eax, eax    ; clear eax to indicate varargs end
    call printf     ; call printf function
    mov eax, 0      ; set return value to 0
    ret             ; return from main
