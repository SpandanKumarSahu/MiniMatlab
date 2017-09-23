	.file	"sample.c"
	.section	.rodata
.LC0:
	.string	"Hello"
.LC1:
	.string	"World"
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
	subq	$16, %rsp
	movl	$7, -8(%rbp)
	cmpl	$8, -8(%rbp)
	jle	.L2
	movl	$.LC0, %edi
	call	puts
	jmp	.L3
.L2:
	movl	$.LC1, %edi
	call	puts
.L3:
	movl	$0, -4(%rbp)
	jmp	.L4
.L5:
	movl	$.LC0, %edi
	call	puts
	addl	$1, -4(%rbp)
.L4:
	movl	-4(%rbp), %eax
	cmpl	-8(%rbp), %eax
	jl	.L5
	jmp	.L6
.L7:
	movl	$.LC1, %edi
	call	puts
	subl	$1, -8(%rbp)
.L6:
	cmpl	$0, -8(%rbp)
	jne	.L7
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.4) 5.4.0 20160609"
	.section	.note.GNU-stack,"",@progbits
