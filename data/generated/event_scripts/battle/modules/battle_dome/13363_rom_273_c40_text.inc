	@ src/battle_dome.c:898 battle_dome_line_898
	.globl gText_Rom_273C40
gText_Rom_273C40: @ 0x08273C40
	.string "つよくて あつかいやすい わざを つかう。$"
	.if (. - gText_Rom_273C40) > 0x16
	.error "gText_Rom_273C40 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273C40) < 0x16
	.space 0x16 - (. - gText_Rom_273C40)
	.endif
