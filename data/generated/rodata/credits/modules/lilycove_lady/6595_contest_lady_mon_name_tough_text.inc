	@ asm/lilycove_lady.s:1826 sub_0818E43C
	.globl gText_ContestLadyMonName_Tough
	.globl gText_Rom_5D3DA7
gText_ContestLadyMonName_Tough:
gText_Rom_5D3DA7: @ 0x085D3DA7
	.string "きんにくん$"
	.if (. - gText_Rom_5D3DA7) > 0x6
	.error "gText_Rom_5D3DA7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5D3DA7) < 0x6
	.space 0x6 - (. - gText_Rom_5D3DA7)
	.endif
	.align 2, 0
