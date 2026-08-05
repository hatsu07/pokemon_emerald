	@ src/strings.c:468 gText_Lv50
	.globl gText_Rom_5DD4F5
gText_Rom_5DD4F5: @ 0x085DD4F5
	.string "レベル50$"
	.if (. - gText_Rom_5DD4F5) > 0x6
	.error "gText_Rom_5DD4F5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DD4F5) < 0x6
	.space 0x6 - (. - gText_Rom_5DD4F5)
	.endif
	.space 0x1, 0x00

