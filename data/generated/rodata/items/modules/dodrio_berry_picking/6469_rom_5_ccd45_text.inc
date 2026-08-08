	@ asm/dodrio_berry_picking.s:10482 sub_080295A4
	.globl gText_Rom_5CCD45
gText_Rom_5CCD45: @ 0x085CCD45
	.string "10P　　30P　　50P　　{0xF9}{0xDD}50P$"
	.if (. - gText_Rom_5CCD45) > 0x15
	.error "gText_Rom_5CCD45 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCD45) < 0x15
	.space 0x15 - (. - gText_Rom_5CCD45)
	.endif
