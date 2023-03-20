	.file	"test.c"
	.intel_syntax noprefix
	.text
	.globl	x
	.data
	.align 4
	.type	x, @object
	.size	x, 4
x:
	.long	10
	.comm	a,8,8
	.section	.rodata
.LC1:
	.string	"%d "
	.text
	.globl	main
	.type	main, @function
main:
.LFB5:
	.cfi_startproc
	lea	ecx, 4[esp]
	.cfi_def_cfa 1, 0
	and	esp, -16
	push	DWORD PTR -4[ecx]
	push	ebp
	.cfi_escape 0x10,0x5,0x2,0x75,0
	mov	ebp, esp
	push	ebx
	push	ecx
	.cfi_escape 0xf,0x3,0x75,0x78,0x6
	.cfi_escape 0x10,0x3,0x2,0x75,0x7c
	sub	esp, 16
	call	__x86.get_pc_thunk.bx
	add	ebx, OFFSET FLAT:_GLOBAL_OFFSET_TABLE_
	mov	DWORD PTR -16[ebp], 10
	mov	eax, DWORD PTR -16[ebp]
	sal	eax, 2
	sub	esp, 12
	push	eax
	call	malloc@PLT
	add	esp, 16
	mov	DWORD PTR -12[ebp], eax
	mov	DWORD PTR -24[ebp], 0
	jmp	.L2
.L3:
	mov	eax, DWORD PTR -24[ebp]
	lea	edx, 0[0+eax*4]
	mov	eax, DWORD PTR -12[ebp]
	add	edx, eax
	mov	eax, DWORD PTR -24[ebp]
	imul	eax, DWORD PTR -24[ebp]
	mov	DWORD PTR [edx], eax
	add	DWORD PTR -24[ebp], 1
.L2:
	mov	eax, DWORD PTR -24[ebp]
	cmp	eax, DWORD PTR -16[ebp]
	jl	.L3
	mov	eax, DWORD PTR x@GOTOFF[ebx]
	add	eax, 1
	mov	DWORD PTR x@GOTOFF[ebx], eax
	mov	eax, DWORD PTR a@GOT[ebx]
	fld	QWORD PTR .LC0@GOTOFF[ebx]
	fstp	QWORD PTR [eax]
	mov	DWORD PTR -20[ebp], 0
	jmp	.L4
.L5:
	mov	eax, DWORD PTR -20[ebp]
	lea	edx, 0[0+eax*4]
	mov	eax, DWORD PTR -12[ebp]
	add	eax, edx
	mov	eax, DWORD PTR [eax]
	sub	esp, 8
	push	eax
	lea	eax, .LC1@GOTOFF[ebx]
	push	eax
	call	printf@PLT
	add	esp, 16
	add	DWORD PTR -20[ebp], 1
.L4:
	mov	eax, DWORD PTR -20[ebp]
	cmp	eax, DWORD PTR -16[ebp]
	jl	.L5
	sub	esp, 12
	push	DWORD PTR -12[ebp]
	call	free@PLT
	add	esp, 16
	mov	eax, 0
	lea	esp, -8[ebp]
	pop	ecx
	.cfi_restore 1
	.cfi_def_cfa 1, 0
	pop	ebx
	.cfi_restore 3
	pop	ebp
	.cfi_restore 5
	lea	esp, -4[ecx]
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE5:
	.size	main, .-main
	.section	.rodata
	.align 8
.LC0:
	.long	0
	.long	1076101120
	.section	.text.__x86.get_pc_thunk.bx,"axG",@progbits,__x86.get_pc_thunk.bx,comdat
	.globl	__x86.get_pc_thunk.bx
	.hidden	__x86.get_pc_thunk.bx
	.type	__x86.get_pc_thunk.bx, @function
__x86.get_pc_thunk.bx:
.LFB6:
	.cfi_startproc
	mov	ebx, DWORD PTR [esp]
	ret
	.cfi_endproc
.LFE6:
	.ident	"GCC: (Ubuntu 7.5.0-3ubuntu1~18.04) 7.5.0"
	.section	.note.GNU-stack,"",@progbits
