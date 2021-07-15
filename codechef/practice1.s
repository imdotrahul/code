	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 11, 0	sdk_version 11, 3
	.globl	_main                           ## -- Begin function main
	.p2align	4, 0x90
_main:                                  ## @main
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$64, %rsp
	movq	___stack_chk_guard@GOTPCREL(%rip), %rax
	movq	(%rax), %rax
	movq	%rax, -8(%rbp)
	movl	$0, -12(%rbp)
	leaq	L_.str(%rip), %rdi
	leaq	-16(%rbp), %rsi
	movb	$0, %al
	callq	_scanf
LBB0_1:                                 ## =>This Loop Header: Depth=1
                                        ##     Child Loop BB0_3 Depth 2
	movl	-16(%rbp), %eax
	movl	%eax, %ecx
	addl	$-1, %ecx
	movl	%ecx, -16(%rbp)
	cmpl	$0, %eax
	je	LBB0_20
## %bb.2:                               ##   in Loop: Header=BB0_1 Depth=1
	movl	$0, -24(%rbp)
	leaq	L_.str(%rip), %rdi
	xorl	%eax, %eax
                                        ## kill: def $al killed $al killed $eax
	leaq	-20(%rbp), %rsi
	callq	_scanf
	movl	-20(%rbp), %ecx
	movl	%ecx, %edx
	movq	%rsp, %rsi
	movq	%rsi, -32(%rbp)
	movl	%eax, -48(%rbp)                 ## 4-byte Spill
	movq	%rdx, %rax
	movq	%rdx, -56(%rbp)                 ## 8-byte Spill
	callq	____chkstk_darwin
	addq	$15, %rax
	andq	$-16, %rax
	subq	%rax, %rsp
	movq	%rsp, %rax
	movq	-56(%rbp), %rdx                 ## 8-byte Reload
	movq	%rdx, -40(%rbp)
	leaq	L_.str.1(%rip), %rdi
	movq	%rax, %rsi
	movq	%rax, -64(%rbp)                 ## 8-byte Spill
	movb	$0, %al
	callq	_scanf
	movl	$0, -44(%rbp)
LBB0_3:                                 ##   Parent Loop BB0_1 Depth=1
                                        ## =>  This Inner Loop Header: Depth=2
	movl	-44(%rbp), %eax
	cmpl	-20(%rbp), %eax
	jg	LBB0_11
## %bb.4:                               ##   in Loop: Header=BB0_3 Depth=2
	movslq	-44(%rbp), %rax
	movq	-64(%rbp), %rcx                 ## 8-byte Reload
	movsbl	(%rcx,%rax), %edx
	cmpl	$73, %edx
	jne	LBB0_6
## %bb.5:                               ##   in Loop: Header=BB0_1 Depth=1
	movl	$1, -24(%rbp)
	jmp	LBB0_11
LBB0_6:                                 ##   in Loop: Header=BB0_3 Depth=2
	movslq	-44(%rbp), %rax
	movq	-64(%rbp), %rcx                 ## 8-byte Reload
	movsbl	(%rcx,%rax), %edx
	cmpl	$89, %edx
	jne	LBB0_8
## %bb.7:                               ##   in Loop: Header=BB0_1 Depth=1
	movl	$2, -24(%rbp)
	jmp	LBB0_11
LBB0_8:                                 ##   in Loop: Header=BB0_3 Depth=2
	jmp	LBB0_9
LBB0_9:                                 ##   in Loop: Header=BB0_3 Depth=2
	jmp	LBB0_10
LBB0_10:                                ##   in Loop: Header=BB0_3 Depth=2
	movl	-44(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -44(%rbp)
	jmp	LBB0_3
LBB0_11:                                ##   in Loop: Header=BB0_1 Depth=1
	cmpl	$1, -24(%rbp)
	jne	LBB0_13
## %bb.12:                              ##   in Loop: Header=BB0_1 Depth=1
	leaq	L_.str.2(%rip), %rdi
	movb	$0, %al
	callq	_printf
	jmp	LBB0_19
LBB0_13:                                ##   in Loop: Header=BB0_1 Depth=1
	cmpl	$2, -24(%rbp)
	jne	LBB0_15
## %bb.14:                              ##   in Loop: Header=BB0_1 Depth=1
	leaq	L_.str.3(%rip), %rdi
	movb	$0, %al
	callq	_printf
	jmp	LBB0_18
LBB0_15:                                ##   in Loop: Header=BB0_1 Depth=1
	cmpl	$0, -24(%rbp)
	jne	LBB0_17
## %bb.16:                              ##   in Loop: Header=BB0_1 Depth=1
	leaq	L_.str.4(%rip), %rdi
	movb	$0, %al
	callq	_printf
LBB0_17:                                ##   in Loop: Header=BB0_1 Depth=1
	jmp	LBB0_18
LBB0_18:                                ##   in Loop: Header=BB0_1 Depth=1
	jmp	LBB0_19
LBB0_19:                                ##   in Loop: Header=BB0_1 Depth=1
	movq	-32(%rbp), %rax
	movq	%rax, %rsp
	jmp	LBB0_1
LBB0_20:
	movq	___stack_chk_guard@GOTPCREL(%rip), %rax
	movq	(%rax), %rax
	movq	-8(%rbp), %rcx
	cmpq	%rcx, %rax
	jne	LBB0_22
## %bb.21:                              ## %SP_return
	xorl	%eax, %eax
	movq	%rbp, %rsp
	popq	%rbp
	retq
LBB0_22:                                ## %CallStackCheckFailBlk
	callq	___stack_chk_fail
	ud2
	.cfi_endproc
                                        ## -- End function
	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	"%d"

L_.str.1:                               ## @.str.1
	.asciz	"%s"

L_.str.2:                               ## @.str.2
	.asciz	"INDIAN\n"

L_.str.3:                               ## @.str.3
	.asciz	"NOT INDIAN\n"

L_.str.4:                               ## @.str.4
	.asciz	"NOT SURE\n"

.subsections_via_symbols
