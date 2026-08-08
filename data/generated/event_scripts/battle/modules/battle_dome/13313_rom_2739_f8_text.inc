	@ src/battle_dome.c:868 battle_dome_line_868
	.globl gText_Rom_2739F8
gText_Rom_2739F8: @ 0x082739F8
	.string "こんたいかいの へいきんてきな チーム。$"
	.if (. - gText_Rom_2739F8) > 0x15
	.error "gText_Rom_2739F8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2739F8) < 0x15
	.space 0x15 - (. - gText_Rom_2739F8)
	.endif
