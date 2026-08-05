	@ asm/dodrio_berry_picking.s:10321 sub_080293D4
	.globl gText_Rom_5CCDE7
gText_Rom_5CCDE7: @ 0x085CCDE7
	.string "てん$"
	.if (. - gText_Rom_5CCDE7) > 0x3
	.error "gText_Rom_5CCDE7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCDE7) < 0x3
	.space 0x3 - (. - gText_Rom_5CCDE7)
	.endif
