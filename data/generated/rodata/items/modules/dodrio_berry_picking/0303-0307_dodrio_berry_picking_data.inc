	@ src/dodrio_berry_picking.c:3064 sJPText_Vowels
	.globl gText_Rom_2CB404
gText_Rom_2CB404: @ 0x082CB404
	.string "あいうえおかき$"
	.if (. - gText_Rom_2CB404) > 0x8
	.error "gText_Rom_2CB404 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2CB404) < 0x8
	.space 0x8 - (. - gText_Rom_2CB404)
	.endif

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
