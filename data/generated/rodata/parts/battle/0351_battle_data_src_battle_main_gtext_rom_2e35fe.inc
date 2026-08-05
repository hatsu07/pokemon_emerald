	@ src/battle_main.c:316 battle_main_line_316
	.globl gText_Rom_2E35FE
gText_Rom_2E35FE: @ 0x082E35FE
	.string "オカルトマニア$"
	.if (. - gText_Rom_2E35FE) > 0x8
	.error "gText_Rom_2E35FE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E35FE) < 0x8
	.space 0x8 - (. - gText_Rom_2E35FE)
	.endif
	.space 0x3, 0x00
