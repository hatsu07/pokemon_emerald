	@ src/battle_main.c:312 battle_main_line_312
	.globl gText_Rom_2E35D2
gText_Rom_2E35D2: @ 0x082E35D2
	.string "たつじん$"
	.if (. - gText_Rom_2E35D2) > 0x5
	.error "gText_Rom_2E35D2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E35D2) < 0x5
	.space 0x5 - (. - gText_Rom_2E35D2)
	.endif
	.space 0x6, 0x00
