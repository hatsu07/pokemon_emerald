	@ src/strings.c:33 gText_Start
	.globl gText_Rom_5C8E15
gText_Rom_5C8E15: @ 0x085C8E15
	.string "スタートボタン$"
	.if (. - gText_Rom_5C8E15) > 0x8
	.error "gText_Rom_5C8E15 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8E15) < 0x8
	.space 0x8 - (. - gText_Rom_5C8E15)
	.endif
