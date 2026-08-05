	@ src/battle_main.c:314 battle_main_line_314 (+1 aliases)
	.globl gText_Rom_2E35E8
gText_Rom_2E35E8: @ 0x082E35E8
	.string "カラテおう$"
	.if (. - gText_Rom_2E35E8) > 0x6
	.error "gText_Rom_2E35E8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E35E8) < 0x6
	.space 0x6 - (. - gText_Rom_2E35E8)
	.endif
	.space 0x5, 0x00
