	@ asm/dodrio_berry_picking.s:10242 sub_080293D4 (+1 aliases)
	.globl gText_Rom_5CCD7D
gText_Rom_5CCD7D: @ 0x085CCD7D
	.string "3:$"
	.if (. - gText_Rom_5CCD7D) > 0x3
	.error "gText_Rom_5CCD7D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCD7D) < 0x3
	.space 0x3 - (. - gText_Rom_5CCD7D)
	.endif
