	@ src/battle_main.c:339 battle_main_line_339 (+1 aliases)
	.globl gText_Rom_2E36FB
gText_Rom_2E36FB: @ 0x082E36FB
	.string "たんぱんこぞう$"
	.if (. - gText_Rom_2E36FB) > 0x8
	.error "gText_Rom_2E36FB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E36FB) < 0x8
	.space 0x8 - (. - gText_Rom_2E36FB)
	.endif
	.space 0x3, 0x00
