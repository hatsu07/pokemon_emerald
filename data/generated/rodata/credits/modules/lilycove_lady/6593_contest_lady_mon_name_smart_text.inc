	@ asm/lilycove_lady.s:1826 sub_0818E43C
	.globl gText_ContestLadyMonName_Smart
	.globl gText_Rom_5D3DA4
gText_ContestLadyMonName_Smart:
gText_Rom_5D3DA4: @ 0x085D3DA4
	.string "てつ$"
	.if (. - gText_Rom_5D3DA4) > 0x3
	.error "gText_Rom_5D3DA4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5D3DA4) < 0x3
	.space 0x3 - (. - gText_Rom_5D3DA4)
	.endif
