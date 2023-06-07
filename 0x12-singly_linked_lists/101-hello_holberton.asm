section .data
    message db 'Hello, Holberton!', 0
    newline db 10

section .text
    global _start

_start:
    ; Write the message to stdout
    mov eax, 4                   ; sys_write system call
    mov ebx, 1                   ; file descriptor (stdout)
    mov ecx, message             ; address of the message
    mov edx, 13                  ; length of the message
    int 0x80                     ; invoke the kernel

    ; Write a new line to stdout
    mov eax, 4                   ; sys_write system call
    mov ebx, 1                   ; file descriptor (stdout)
    mov ecx, newline             ; address of the new line
    mov edx, 1                   ; length of the new line
    int 0x80                     ; invoke the kernel

    ; Exit the program
    mov eax, 1                   ; sys_exit system call
    xor ebx, ebx                 ; exit status (0)
    int 0x80                     ; invoke the kernel

