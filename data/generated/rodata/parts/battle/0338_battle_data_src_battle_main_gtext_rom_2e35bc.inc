	@ src/battle_main.c:310 battle_main_line_310 (+1 aliases)
	.globl gText_Rom_2E35BC
gText_Rom_2E35BC: @ 0x082E35BC
	.string "かいパンやろう$"
	.if (. - gText_Rom_2E35BC) > 0x8
	.error "gText_Rom_2E35BC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E35BC) < 0x8
	.space 0x8 - (. - gText_Rom_2E35BC)
	.endif
	.space 0x3, 0x00
