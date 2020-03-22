;64 bit assemly prints Hello, Holberton with a newline "

section     .data
	helloholberton  db "Hello, Holberton",10

section .text
	global main

main:

	mov     rax, 1		;writes to stdout Hell, Holberton\n
	mov     rdi, 1
	mov     rsi, helloholberton 
	mov     rdx, 17 
	syscall

	mov	rax, 60		;exit (0) 
	mov	rdi, 0
	syscall

