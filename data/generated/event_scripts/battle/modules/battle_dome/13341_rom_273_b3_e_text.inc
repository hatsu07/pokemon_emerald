	@ src/battle_dome.c:887 battle_dome_line_887
	.globl gText_Rom_273B3E
gText_Rom_273B3E: @ 0x08273B3E
	.string "とても めずらしい わざを ときどき つかう。$"
	.if (. - gText_Rom_273B3E) > 0x18
	.error "gText_Rom_273B3E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273B3E) < 0x18
	.space 0x18 - (. - gText_Rom_273B3E)
	.endif
