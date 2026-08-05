	@ src/battle_main.c:308 battle_main_line_308 (+1 aliases)
	.globl gText_Rom_2E35A6
gText_Rom_2E35A6: @ 0x082E35A6
	.string "とりつかい$"
	.if (. - gText_Rom_2E35A6) > 0x6
	.error "gText_Rom_2E35A6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E35A6) < 0x6
	.space 0x6 - (. - gText_Rom_2E35A6)
	.endif
	.space 0x5, 0x00
