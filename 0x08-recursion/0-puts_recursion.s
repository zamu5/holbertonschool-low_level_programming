	.file	"0-puts_recursion.c"
	.text
	.globl	_puts_recursion
	.type	_puts_recursion, @function
_puts_recursion:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movzbl	(%rax), %eax
	testb	%al, %al
	je	.L2
	movq	-8(%rbp), %rax
	movzbl	(%rax), %eax
	movsbl	%al, %eax
	movl	%eax, %edi
	call	_putchar@PLT
	addq	$1, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_puts_recursion
	jmp	.L4
.L2:
	movl	$10, %edi
	call	_putchar@PLT
.L4:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	_puts_recursion, .-_puts_recursion
	.ident	"GCC: (Debian 6.3.0-18+deb9u1) 6.3.0 20170516"
	.section	.note.GNU-stack,"",@progbits
