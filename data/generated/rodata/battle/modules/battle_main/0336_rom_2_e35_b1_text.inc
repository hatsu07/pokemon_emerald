	@ src/battle_main.c:309 battle_main_line_309
	.globl gText_Rom_2E35B1
gText_Rom_2E35B1: @ 0x082E35B1
	.string "ポケモンコレクター$"
	.if (. - gText_Rom_2E35B1) > 0xa
	.error "gText_Rom_2E35B1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E35B1) < 0xa
	.space 0xa - (. - gText_Rom_2E35B1)
	.endif
	.space 0x1, 0x00
