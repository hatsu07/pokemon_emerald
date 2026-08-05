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
