	@ asm/lilycove_lady.s:1789 sub_0818E3F0
	.globl gText_ContestLadyCategory_Cute
	.globl gText_Rom_5D3DCE
gText_ContestLadyCategory_Cute:
gText_Rom_5D3DCE: @ 0x085D3DCE
	.string "かわい$"
	.if (. - gText_Rom_5D3DCE) > 0x4
	.error "gText_Rom_5D3DCE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5D3DCE) < 0x4
	.space 0x4 - (. - gText_Rom_5D3DCE)
	.endif
