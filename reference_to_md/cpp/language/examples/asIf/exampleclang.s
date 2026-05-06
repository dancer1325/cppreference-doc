	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 26, 0	sdk_version 26, 1
	.globl	__Z6preincRi                    ; -- Begin function _Z6preincRi
	.p2align	2
__Z6preincRi:                           ; @_Z6preincRi
	.cfi_startproc
; %bb.0:
	ldr	w8, [x0]
	add	w8, w8, #1
	str	w8, [x0]
	ret
	.cfi_endproc
                                        ; -- End function
	.globl	__Z3addii                       ; -- Begin function _Z3addii
	.p2align	2
__Z3addii:                              ; @_Z3addii
	.cfi_startproc
; %bb.0:
	add	w0, w1, w0
	ret
	.cfi_endproc
                                        ; -- End function
	.globl	_main                           ; -- Begin function main
	.p2align	2
_main:                                  ; @main
	.cfi_startproc
; %bb.0:
Lloh0:
	adrp	x8, _input@PAGE
Lloh1:
	ldr	w8, [x8, _input@PAGEOFF]
	lsl	w8, w8, #1
	add	w8, w8, #3
	adrp	x9, _result@PAGE
	str	w8, [x9, _result@PAGEOFF]
	mov	w0, #0                          ; =0x0
	ret
	.loh AdrpLdr	Lloh0, Lloh1
	.cfi_endproc
                                        ; -- End function
	.section	__DATA,__data
	.globl	_input                          ; @input
	.p2align	2, 0x0
_input:
	.long	7                               ; 0x7

	.globl	_result                         ; @result
.zerofill __DATA,__common,_result,4,2
.subsections_via_symbols
