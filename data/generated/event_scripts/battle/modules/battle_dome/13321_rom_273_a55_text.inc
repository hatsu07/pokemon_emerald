	@ src/battle_dome.c:872 battle_dome_line_872
	.globl gText_Rom_273A55
gText_Rom_273A55: @ 0x08273A55
	.string "1しょう できれば じょうじょうの チーム。$"
	.if (. - gText_Rom_273A55) > 0x17
	.error "gText_Rom_273A55 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273A55) < 0x17
	.space 0x17 - (. - gText_Rom_273A55)
	.endif
