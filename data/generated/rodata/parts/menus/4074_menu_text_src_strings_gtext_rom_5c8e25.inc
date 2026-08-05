	@ src/strings.c:35 gText_ControlPad
	.globl gText_Rom_5C8E25
gText_Rom_5C8E25: @ 0x085C8E25
	.string "じゅうじボタン$"
	.if (. - gText_Rom_5C8E25) > 0x8
	.error "gText_Rom_5C8E25 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8E25) < 0x8
	.space 0x8 - (. - gText_Rom_5C8E25)
	.endif
