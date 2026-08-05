	@ src/battle_main.c:311 battle_main_line_311 (+1 aliases)
	.globl gText_Rom_2E35C7
gText_Rom_2E35C7: @ 0x082E35C7
	.string "マグマだん$"
	.if (. - gText_Rom_2E35C7) > 0x6
	.error "gText_Rom_2E35C7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E35C7) < 0x6
	.space 0x6 - (. - gText_Rom_2E35C7)
	.endif
	.space 0x5, 0x00
