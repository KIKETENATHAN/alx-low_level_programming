section .data
    hello db "Hello, Holberton", 0
    format db "%s", 10, 0   ; "%s" for string, 10 for newline

section .text
global main
    extern printf

main:
    push rbp
    mov rdi, format
    mov rsi, hello
    xor rax, rax
    call printf
    pop rbp
    ret
