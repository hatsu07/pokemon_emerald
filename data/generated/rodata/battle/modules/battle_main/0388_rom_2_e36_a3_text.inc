	@ src/battle_main.c:331 battle_main_line_331 (+1 aliases)
	.globl gText_Rom_2E36A3
gText_Rom_2E36A3: @ 0x082E36A3
	.string "サイキッカー$"
	.if (. - gText_Rom_2E36A3) > 0x7
	.error "gText_Rom_2E36A3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E36A3) < 0x7
	.space 0x7 - (. - gText_Rom_2E36A3)
	.endif
	.space 0x4, 0x00
