.section .rodata
	msg_main_print:
	.string "In main, number is %d\n"

.section .text
.globl	main
.type 	main, @function
main:
	pushl 	%ebp
	movl	%esp, %ebp

	movl	g_iNo, %eax
	pushl	%eax
	pushl	$msg_main_print
	call 	printf
	addl	$8, %esp

	call	fun
	
	pushl	$0
	call 	exit