	@ src/battle_dome.c:900 battle_dome_line_900
	.globl gText_Rom_273C6E
gText_Rom_273C6E: @ 0x08273C6E
	.string "こうげきを うまく かわしながら たたかう。$"
	.if (. - gText_Rom_273C6E) > 0x17
	.error "gText_Rom_273C6E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273C6E) < 0x17
	.space 0x17 - (. - gText_Rom_273C6E)
	.endif
