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
	movq	8(%rsi), %rdi
	callq	_atoi
	testl	%eax, %eax
	je	LBB0_1
## %bb.2:
	cmpl	$1, %eax
	jne	LBB0_5
## %bb.3:
	leaq	L_str(%rip), %rdi
	jmp	LBB0_4
LBB0_1:
	leaq	L_str.2(%rip), %rdi
LBB0_4:
	callq	_puts
LBB0_5:
	xorl	%eax, %eax
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.section	__TEXT,__cstring,cstring_literals
L_str:                                  ## @str
	.asciz	"X = 1"

L_str.2:                                ## @str.2
	.asciz	"X = 0"

.subsections_via_symbols
