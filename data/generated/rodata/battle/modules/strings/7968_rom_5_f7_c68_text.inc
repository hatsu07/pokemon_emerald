	@ src/strings.c:1136 gText_MoveRelearnerPower
	.globl gText_Rom_5F7C68
gText_Rom_5F7C68: @ 0x085F7C68
	.string "いりょく/$"
	.if (. - gText_Rom_5F7C68) > 0x6
	.error "gText_Rom_5F7C68 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F7C68) < 0x6
	.space 0x6 - (. - gText_Rom_5F7C68)
	.endif
