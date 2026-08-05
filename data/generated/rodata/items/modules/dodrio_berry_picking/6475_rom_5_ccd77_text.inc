	@ asm/dodrio_berry_picking.s:10242 sub_080293D4
	.globl gText_Rom_5CCD77
gText_Rom_5CCD77: @ 0x085CCD77
	.string "1:$"
	.if (. - gText_Rom_5CCD77) > 0x3
	.error "gText_Rom_5CCD77 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCD77) < 0x3
	.space 0x3 - (. - gText_Rom_5CCD77)
	.endif
