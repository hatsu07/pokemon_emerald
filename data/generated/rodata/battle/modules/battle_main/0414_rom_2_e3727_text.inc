	@ src/battle_main.c:343 battle_main_line_343
	.globl gText_Rom_2E3727
gText_Rom_2E3727: @ 0x082E3727
	.string "ドラゴンつかい$"
	.if (. - gText_Rom_2E3727) > 0x8
	.error "gText_Rom_2E3727 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E3727) < 0x8
	.space 0x8 - (. - gText_Rom_2E3727)
	.endif
	.space 0x3, 0x00
