	@ src/strings.c:30 gText_BButton
	.globl gText_Rom_5C8E02
gText_Rom_5C8E02: @ 0x085C8E02
	.string "ビーボタン$"
	.if (. - gText_Rom_5C8E02) > 0x6
	.error "gText_Rom_5C8E02 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8E02) < 0x6
	.space 0x6 - (. - gText_Rom_5C8E02)
	.endif
