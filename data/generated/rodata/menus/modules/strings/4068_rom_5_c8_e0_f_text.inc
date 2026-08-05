	@ src/strings.c:32 gText_LButton
	.globl gText_Rom_5C8E0F
gText_Rom_5C8E0F: @ 0x085C8E0F
	.string "エルボタン$"
	.if (. - gText_Rom_5C8E0F) > 0x6
	.error "gText_Rom_5C8E0F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8E0F) < 0x6
	.space 0x6 - (. - gText_Rom_5C8E0F)
	.endif
