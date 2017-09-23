	.file	"sample.c"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$2, -12(%rbp)
	jmp	.L2
.L3:
	movl	$6, -8(%rbp)
	addl	$1, -12(%rbp)
.L2:
	cmpl	$19, -12(%rbp)
	jle	.L3
	movl	$1, -16(%rbp)
	jmp	.L4
.L5:
	movl	$5, -4(%rbp)
	addl	$1, -16(%rbp)
.L4:
	cmpl	$9, -16(%rbp)
	jle	.L5
	movl	$0, %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.4) 5.4.0 20160609"
	.section	.note.GNU-stack,"",@progbits
