	@ asm/lilycove_lady.s:1826 sub_0818E43C
	.globl gText_ContestLadyMonName_Cool
	.globl gText_Rom_5D3D94
gText_ContestLadyMonName_Cool:
gText_Rom_5D3D94: @ 0x085D3D94
	.string "ハンサム$"
	.if (. - gText_Rom_5D3D94) > 0x5
	.error "gText_Rom_5D3D94 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5D3D94) < 0x5
	.space 0x5 - (. - gText_Rom_5D3D94)
	.endif
