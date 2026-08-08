	@ src/battle_dome.c:1004 battle_dome_line_1004
	.globl gText_Rom_274188
gText_Rom_274188: @ 0x08274188
	.string "あいての リタイアで {STR_VAR_1}が しょうり!$"
	.if (. - gText_Rom_274188) > 0x15
	.error "gText_Rom_274188 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274188) < 0x15
	.space 0x15 - (. - gText_Rom_274188)
	.endif
