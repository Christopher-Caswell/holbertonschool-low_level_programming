	        .section        .rodata
	.LC0:
	        .string "Hello, Holberton "
	        .text
	        .globl  main
	        .type   main, @function
main:
	        pushq   %rbp
	        movq    %rsp, %rbp
	        movl    $.LC0, %edi
	        call    puts
	        popq    %rbp
	        ret
	        .size   main, .-main
	        .ident  "GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.4) 4.8.4"
	        .section        .note.GNU-stack,"",@progbits
