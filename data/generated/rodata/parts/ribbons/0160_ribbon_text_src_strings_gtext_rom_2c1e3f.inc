	@ src/strings.c:468 gText_Lv50
	.globl gText_Rom_2C1E3F
gText_Rom_2C1E3F: @ 0x082C1E3F
	.string "レベル50$"
	.if (. - gText_Rom_2C1E3F) > 0x6
	.error "gText_Rom_2C1E3F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C1E3F) < 0x6
	.space 0x6 - (. - gText_Rom_2C1E3F)
	.endif
	.space 0x3, 0x00
