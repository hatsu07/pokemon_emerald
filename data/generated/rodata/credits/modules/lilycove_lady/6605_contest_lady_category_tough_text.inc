	@ asm/lilycove_lady.s:1789 sub_0818E3F0
	.globl gText_ContestLadyCategory_Tough
	.globl gText_Rom_5D3DD6
gText_ContestLadyCategory_Tough:
gText_Rom_5D3DD6: @ 0x085D3DD6
	.string "たくまし$"
	.if (. - gText_Rom_5D3DD6) > 0x5
	.error "gText_Rom_5D3DD6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5D3DD6) < 0x5
	.space 0x5 - (. - gText_Rom_5D3DD6)
	.endif
	.align 2, 0
