	@ asm/dodrio_berry_picking.s:11319 sub_08029D28
	.globl gText_Rom_5C9421
gText_Rom_5C9421: @ 0x085C9421
	.string "▶$"
	.if (. - gText_Rom_5C9421) > 0x2
	.error "gText_Rom_5C9421 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9421) < 0x2
	.space 0x2 - (. - gText_Rom_5C9421)
	.endif
