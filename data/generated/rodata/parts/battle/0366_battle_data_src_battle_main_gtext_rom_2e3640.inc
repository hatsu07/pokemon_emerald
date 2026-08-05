	@ src/battle_main.c:322 battle_main_line_322 (+1 aliases)
	.globl gText_Rom_2E3640
gText_Rom_2E3640: @ 0x082E3640
	.string "おじょうさま$"
	.if (. - gText_Rom_2E3640) > 0x7
	.error "gText_Rom_2E3640 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E3640) < 0x7
	.space 0x7 - (. - gText_Rom_2E3640)
	.endif
	.space 0x4, 0x00
