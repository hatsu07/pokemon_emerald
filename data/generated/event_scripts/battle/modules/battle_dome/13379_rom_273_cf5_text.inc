	@ src/battle_dome.c:906 battle_dome_line_906
	.globl gText_Rom_273CF5
gText_Rom_273CF5: @ 0x08273CF5
	.string "まもりより とにかく せめを だいじに する。$"
	.if (. - gText_Rom_273CF5) > 0x18
	.error "gText_Rom_273CF5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273CF5) < 0x18
	.space 0x18 - (. - gText_Rom_273CF5)
	.endif
