	@ src/dodrio_berry_picking.c:3066 sText_Digits
	.globl gText_Rom_2CB414
gText_Rom_2CB414: @ 0x082CB414
	.string "0123456$"
	.if (. - gText_Rom_2CB414) > 0x8
	.error "gText_Rom_2CB414 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2CB414) < 0x8
	.space 0x8 - (. - gText_Rom_2CB414)
	.endif
