	@ src/strings.c:29 gText_AButton
	.globl gText_Rom_5C8DFC
gText_Rom_5C8DFC: @ 0x085C8DFC
	.string "エーボタン$"
	.if (. - gText_Rom_5C8DFC) > 0x6
	.error "gText_Rom_5C8DFC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8DFC) < 0x6
	.space 0x6 - (. - gText_Rom_5C8DFC)
	.endif
