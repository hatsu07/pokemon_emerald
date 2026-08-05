	@ src/battle_dome.c:904 battle_dome_line_904
	.globl gText_Rom_273CC7
gText_Rom_273CC7: @ 0x08273CC7
	.string "てがたい わざで きっちりと こうげきする。$"
	.if (. - gText_Rom_273CC7) > 0x17
	.error "gText_Rom_273CC7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273CC7) < 0x17
	.space 0x17 - (. - gText_Rom_273CC7)
	.endif
