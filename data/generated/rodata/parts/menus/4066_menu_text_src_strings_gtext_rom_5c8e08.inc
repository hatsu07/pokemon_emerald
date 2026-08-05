	@ src/strings.c:31 gText_RButton
	.globl gText_Rom_5C8E08
gText_Rom_5C8E08: @ 0x085C8E08
	.string "アールボタン$"
	.if (. - gText_Rom_5C8E08) > 0x7
	.error "gText_Rom_5C8E08 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8E08) < 0x7
	.space 0x7 - (. - gText_Rom_5C8E08)
	.endif
