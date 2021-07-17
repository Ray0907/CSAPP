	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 11, 0	sdk_version 11, 3
	.globl	_pcount_r                       ## -- Begin function pcount_r
	.p2align	4, 0x90
_pcount_r:                              ## @pcount_r
	.cfi_startproc
## %bb.0:
	testq	%rdi, %rdi
	je	LBB0_1
## %bb.2:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	pushq	%rbx
	pushq	%rax
	.cfi_offset %rbx, -24
	movq	%rdi, %rbx
	shrq	%rdi
	callq	_pcount_r
	addq	%rbx, %rax
	addq	$8, %rsp
	popq	%rbx
	popq	%rbp
	retq
LBB0_1:
	xorl	%eax, %eax
	retq
	.cfi_endproc
                                        ## -- End function
.subsections_via_symbols
