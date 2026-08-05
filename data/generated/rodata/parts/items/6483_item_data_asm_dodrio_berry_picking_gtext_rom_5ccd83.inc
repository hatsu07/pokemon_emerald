	@ asm/dodrio_berry_picking.s:10242 sub_080293D4 (+1 aliases)
	.globl gText_Rom_5CCD83
gText_Rom_5CCD83: @ 0x085CCD83
	.string "5:$"
	.if (. - gText_Rom_5CCD83) > 0x3
	.error "gText_Rom_5CCD83 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCD83) < 0x3
	.space 0x3 - (. - gText_Rom_5CCD83)
	.endif
