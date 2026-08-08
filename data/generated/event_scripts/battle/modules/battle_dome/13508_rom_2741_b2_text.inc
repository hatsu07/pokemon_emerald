	@ src/battle_dome.c:1006 battle_dome_line_1006
	.globl gText_Rom_2741B2
gText_Rom_2741B2: @ 0x082741B2
	.string "わざを つかわずに {STR_VAR_1}が しょうり!$"
	.if (. - gText_Rom_2741B2) > 0x14
	.error "gText_Rom_2741B2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2741B2) < 0x14
	.space 0x14 - (. - gText_Rom_2741B2)
	.endif
