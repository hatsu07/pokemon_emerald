	@ asm/lilycove_lady.s:1826 sub_0818E43C
	.globl gText_ContestLadyMonName_Beauty
	.globl gText_Rom_5D3D99
gText_ContestLadyMonName_Beauty:
gText_Rom_5D3D99: @ 0x085D3D99
	.string "ジョバンニ$"
	.if (. - gText_Rom_5D3D99) > 0x6
	.error "gText_Rom_5D3D99 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5D3D99) < 0x6
	.space 0x6 - (. - gText_Rom_5D3D99)
	.endif
