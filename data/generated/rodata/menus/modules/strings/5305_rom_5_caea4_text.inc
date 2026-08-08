	@ src/strings.c:468 gText_Lv50
	.globl gText_Rom_5CAEA4
gText_Rom_5CAEA4: @ 0x085CAEA4
	.string "レベル50$"
	.if (. - gText_Rom_5CAEA4) > 0x6
	.error "gText_Rom_5CAEA4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAEA4) < 0x6
	.space 0x6 - (. - gText_Rom_5CAEA4)
	.endif
