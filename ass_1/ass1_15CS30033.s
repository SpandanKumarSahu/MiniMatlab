	.file	"test.c"
	.text
	.globl	func
	.type	func, @function
/*
	The above lines convey that a file named "test.c", written in text format
	has a global function named func.
*/


func:
.LFB0:
/*
	Marks the beginning of the function named 'func' defination.
	LFB stands for "Function Begin Label".
*/
	
	.cfi_startproc			# Starts the instruction procedure.
					# CFI stands for Call Frame Instruction
	pushq	%rbp
/*
	rbp means stack base pointer.
	rbp gets a snapshot of the stack pointer (rsp : behaves like the head pointer of Turing machine)
	when adjustments are made to rsp (like reserving space for local variables or pushing values on to the stack),
	local variables and function parameters are still accessible from a constant offset from rbp
*/
	.cfi_def_cfa_offset 16

/*
	modifies a rule for computing CFA. Register remains the same, but offset is now 16.
	It is the absolute offset that will be added to a defined register to compute CFA address.
*/
	.cfi_offset 6, -16		# Take address from register number 6, and 16 bits as an offset to it
	movq	%rsp, %rbp		# Bring base pointer to the place of stack pointer
	.cfi_def_cfa_register 6
/*
	modifies the rule for computing CFA.
	From now on register will be used instead of the old one. Offset remains the same.
*/

/*
	In total, uptil now :	
	The stack frame at the top of the stack is for the currently executing routine.
	The stack frame usually includes at least the following items (in push order):

	    1. the arguments (parameter values) passed to the routine (if any);
	    2. the return address back to the routine's caller and
	    3. space for the local variables of the routine (if any).

*/
	pushq	%rbx			# Callee saved register pushed to the stack
	subq	$56, %rsp		# Allocate space for all local variables
	.cfi_offset 3, -24		# Similar to the one mentioned in previous explanations
	movl	%edi, -52(%rbp)
/*
	edi is in general for input parameters.
	this means, store the input at %rb - 52 place in the stack
*/
	movq	%fs:40, %rax
	movq	%rax, -24(%rbp)
/*
	fs = file segment. When we are accessing fs:40 (fs with offset 40)
	we are getting a pointer to the file location, which is now stored in %rax
	The file can be from heap memory or from any other storage.
	But, __stack_chk_fail@PLT at the signifies we are creating an array here.
	%rax stores a pointer, not a value.
	We don't yet know what the size of the array is.
*/
	xorl	%eax, %eax		# clear %eax register. %eax = 0
	movq	%rsp, %rax		# move the rax pointer to stack pointer
	movq	%rax, %rsi		# rsi now points to the same as rax
	movl	-52(%rbp), %eax		# eax gets the value of %rbp - 52, ultimately %edi ( = 9)
	addl	$1, %eax		# Add 1 to the eax. So eax now holds value 10.
/*
	We are doing something like `int x = n + 1;`
	But we are not necessarily storing it, because, we didn't assign any memory for it.
	We are temporarily increasing the value of n by 1.
*/
	movslq	%eax, %rdx		# movslq stands for moving signed long (32 bits) to quad(64 bits)
	subq	$1, %rdx		# subtract 1 from %rdx. now value at rdx = 9
	movq	%rdx, -40(%rbp)		# store rdx at %rbp - 40
	movslq	%eax, %rdx		# move %eax to quad register %rdx
/*
	rdx now has value %eax + 1 (=10)
*/
	movq	%rdx, %r8
	movl	$0, %r9d
	movslq	%eax, %rdx
	movq	%rdx, %rcx
	movl	$0, %ebx
	cltq
/*
	usual assignment operations. cltq is an almost redundant version of movslq.
*/
	salq	$2, %rax		# shift left rax by 2 places
	leaq	3(%rax), %rdx		# store value at rax + 3 in %rdx
	movl	$16, %eax		# eax = 16
	subq	$1, %rax		# rax = rax - 1
	addq	%rdx, %rax		# rdx = rax + rdx
	movl	$16, %edi
	movl	$0, %edx
	divq	%rdi
/*
	Unsigned divide %rdx:%rax by %rdi
	Quotient stored in %rax Remainder stored in %rdx
*/

	imulq	$16, %rax, %rax		# rax = rax * 16
	subq	%rax, %rsp		# rsp = rsp - rax
	movq	%rsp, %rax
	addq	$3, %rax
	shrq	$2, %rax
	salq	$2, %rax
/*
	All the usual subtract and addition operations.
	After this %edx + 1, amount of memory was allocated in the stack.
	%rax points to the first element of the array.
	Each element of array is of 4 bytes
*/
	movq	%rax, -32(%rbp)
	movq	-32(%rbp), %rax
	movl	$0, (%rax)		# %rax stores a pointer, the value of which is accessed by (%rax)

---------------->equivalent C code: ar[0] = 0;

	movq	-32(%rbp), %rax
	movl	$1, 4(%rax)		# Value at rax + 4 = 1

---------------->equivalent C code: ar[1] = 1;

	movl	$2, -44(%rbp)		# Value at rbp - 44 = 2

---------------->equivalent C code: int count = 2;

	jmp	.L2

/*
	The placement of .L2 and .L3 suggests, there is a for or while loop.
	We can't be sure of which one, though, yet.
	.L3 has the body of the loop
	.L2 has the test condition
*/

.L3:
	movl	-44(%rbp), %eax		# load value of 'count' in %eax
	leal	-1(%rax), %edx		# edx = value rax - 1
	movq	-32(%rbp), %rax		# move value at rbp -32 to rax. (basically, move the pointer of the array)
	movslq	%edx, %rdx		# making copy of ar[i-1]
	movl	(%rax,%rdx,4), %ecx	# load value of y into %ecx

	movl	-44(%rbp), %eax		# load value of count in %eax
	leal	-2(%rax), %edx		# load value at %rax -2 in %edx
	movq	-32(%rbp), %rax		# load value of x into %rax
	movslq	%edx, %rdx		# # make copy of ar[i-2]
	movl	(%rax,%rdx,4), %eax	# load value of x in %eax. 

	addl	%eax, %ecx		# add value of %eax and %ecx and store in %ecx
					# In C : ar[i-1] + ar[i-2]

	movq	-32(%rbp), %rax		# update position of %rax
	movl	-44(%rbp), %edx		# load value of count into %rdx
	movslq	%edx, %rdx		# %edx becomes %rdx = count
	movl	%ecx, (%rax,%rdx,4)	# move the result to ar[count] (where each element of array is 4 bytes)

---------------->equivalent C code: ar[i] = ar[i-1] + ar[i-2];

	addl	$1, -44(%rbp)		# increment value of 'count' by 1

---------------->equivalent C code: count += 1; (or it can be count++;. No way to distinguish)

.L2:
	movl	-44(%rbp), %eax
	cmpl	-52(%rbp), %eax		# %rbp - 52 had the input parameter, n
	jle	.L3

---------------->equivalent C code: while (count <= n) (or it can be, the test condition of a for loop. It can't distinguished)

	movq	-32(%rbp), %rax		# Update the pointer of array
	movl	-52(%rbp), %edx		# store input parameter (=n) in %edx
	movslq	%edx, %rdx
	movl	(%rax,%rdx,4), %eax	# accessing ar[n] and storing in %eax
/*
	If we look in the main function, then we see, that the output of this function
	is returned through %eax register. And also, in general %eax register is used to send 
	output.
*/
	movq	%rsi, %rsp		# stack pointer points to 
	movq	-24(%rbp), %rbx
	xorq	%fs:40, %rbx		# %rbx and %fs:40 are same now, XOR'ing will make it 0
	je	.L5			# Jump when the result of compare is equal to L5
	call	__stack_chk_fail@PLT	# Protection against buffer overflow
.L5:
	movq	-8(%rbp), %rbx		# Store the result into %rbx
	leave				# restore stack and frame pointers
	.cfi_def_cfa 7, 8
	ret				# return

---------------->equivalent C code: return ar[n];

	.cfi_endproc
.LFE0:					# Label for Function End
	.size	func, .-func
	.section	.rodata
.LC0:
	.string	"%d"
	.text
	.globl	main
	.type	main, @function

main:
.LFB1:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
/*
	All these have been explained earlier.
*/

	subq	$16, %rsp		# Move stack pointer by 16 bits to accomodate local variables
	movl	$9, -4(%rbp)		# Value at %rbp - 4 is 9

-------------> equivalent C code: int x = 9;

	movl	-4(%rbp), %eax
/*
	Transfer the value at %rbp - 4 to eax register.
	eax is a caller-saved register.
	eax is generally used for return values from a function.
*/
	movl	%eax, %edi
/*
	Store the returned value in caller-saved edi register.
	edi is used to pass integer or pointer parameters to the fucntion.
	No 'lea' means, call by value, and not reference.
*/
	call	func			# Call the fucntion 'func' with the parameters
	movl	%eax, %esi		# eax is the output register from the func call
/*
	Store the value of eax at esi
	Since esi is generally for input and this statement is followed by printf
	it seems, the return value wasn't stored seperately, rather printed directly.
*/

	# Prepare arguements for printf
	leaq	.LC0(%rip), %rdi	# Get the pointer for "%d" and store it in %rdi
	movl	$0, %eax		# clear eax
	call	printf@PLT		# Call printf
/*
	printf@plt is actually a small stub which (eventually) calls the real printf function
	same for getchar@plt
*/

--------------> equivalent C code: printf("%d", func(x));

	call	getchar@PLT		# Call getchar

---------------> equivalent C code: getchar();

	movl	$0, %eax		# for return 0, we need to load 0 to register eax, generally used for output purposes
	leave				# restore stack and frame pointers
	.cfi_def_cfa 7, 8
	ret				# return statement

---------------> equivalent C code: return 0;

	.cfi_endproc
.LFE1:
	.size	main, .-main
	.ident	"GCC: (GNU) 7.1.1 20170630"
	.section	.note.GNU-stack,"",@progbits



/********************************************************************************
	THE EXPECTED C PROGRAM ( NEED NOT BE UNIQUE, AS DESCRIBED IN THE COMMENTS)

	#include <stdio.h>
	
	int func(int n){
		int ar[n+1];
		ar[0] = 0;
		ar[1] = 1;
		for(int i = 2; i <= n; i++){
			ar[i] = ar[i-1] + ar[i-2];
		}
		return ar[n];
	}

	int main(){
		int n = 9;
		printf("%d", func(n));
		getchar();
		return 0;
	}
**********************************************************************************/

/*********************************************************************************
	THE PROGRAM DESCRIPTION

	The corresponding C program calculates the nth fibonacci number, where n = 9, using DYNAMIC PROGRAMMING method.
	
	The fibonacci series is defined as a series of numbers in which each number ( Fibonacci number ) is the sum of 
	the two preceding numbers.
*********************************************************************************/





