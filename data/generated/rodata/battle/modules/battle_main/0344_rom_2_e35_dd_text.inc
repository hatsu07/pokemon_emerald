	@ src/battle_main.c:313 battle_main_line_313
	.globl gText_Rom_2E35DD
gText_Rom_2E35DD: @ 0x082E35DD
	.string "アクアだんかんぶ$"
	.if (. - gText_Rom_2E35DD) > 0x9
	.error "gText_Rom_2E35DD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E35DD) < 0x9
	.space 0x9 - (. - gText_Rom_2E35DD)
	.endif
	.space 0x2, 0x00
