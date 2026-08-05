	@ asm/dodrio_berry_picking.s:10242 sub_080293D4 (+1 aliases)
	.globl gText_Rom_5CCD80
gText_Rom_5CCD80: @ 0x085CCD80
	.string "4:$"
	.if (. - gText_Rom_5CCD80) > 0x3
	.error "gText_Rom_5CCD80 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCD80) < 0x3
	.space 0x3 - (. - gText_Rom_5CCD80)
	.endif
