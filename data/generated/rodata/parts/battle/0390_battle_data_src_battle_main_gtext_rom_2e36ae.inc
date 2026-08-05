	@ src/battle_main.c:332 battle_main_line_332 (+1 aliases)
	.globl gText_Rom_2E36AE
gText_Rom_2E36AE: @ 0x082E36AE
	.string "ジェントルマン$"
	.if (. - gText_Rom_2E36AE) > 0x8
	.error "gText_Rom_2E36AE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E36AE) < 0x8
	.space 0x8 - (. - gText_Rom_2E36AE)
	.endif
	.space 0x3, 0x00
