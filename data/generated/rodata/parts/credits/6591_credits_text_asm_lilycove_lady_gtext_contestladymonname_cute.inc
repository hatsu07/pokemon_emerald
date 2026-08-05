	@ asm/lilycove_lady.s:1826 sub_0818E43C
	.globl gText_ContestLadyMonName_Cute
	.globl gText_Rom_5D3D9F
gText_ContestLadyMonName_Cute:
gText_Rom_5D3D9F: @ 0x085D3D9F
	.string "もあもあ$"
	.if (. - gText_Rom_5D3D9F) > 0x5
	.error "gText_Rom_5D3D9F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5D3D9F) < 0x5
	.space 0x5 - (. - gText_Rom_5D3D9F)
	.endif
