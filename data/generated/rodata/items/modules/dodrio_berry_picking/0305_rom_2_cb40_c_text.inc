	@ src/dodrio_berry_picking.c:3065 sText_Letters
	.globl gText_Rom_2CB40C
gText_Rom_2CB40C: @ 0x082CB40C
	.string "ABCDEFG$"
	.if (. - gText_Rom_2CB40C) > 0x8
	.error "gText_Rom_2CB40C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2CB40C) < 0x8
	.space 0x8 - (. - gText_Rom_2CB40C)
	.endif
