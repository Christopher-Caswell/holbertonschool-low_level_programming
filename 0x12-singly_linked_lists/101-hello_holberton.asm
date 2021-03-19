    section .data
	fmt db "%s", 10, 0
	msg db "Hello, Holberton", 0

	section .text
	extern printf
	global main, _start
main:	
_start:	
	mov  esi, msg1
	mov  edi, fmt
	mov  eax, 0
	call printf
ret
