    section .data
	fmt     db "%s\n", 0
	msg1    db "Hello, Holberton",0

	    section .text
	    extern printf
	    global _start

_start:
	    mov  edx, msg1
	    mov  esi, 1
	    mov  edi, fmt
	    mov  eax, 0  	; no f.p. args
	    call printf
	ret
