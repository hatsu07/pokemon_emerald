	@ src/battle_main.c:305 battle_main_line_305 (+1 aliases)
	.globl gText_Rom_2E3585
gText_Rom_2E3585: @ 0x082E3585
	.string "アクアだん$"
	.if (. - gText_Rom_2E3585) > 0x6
	.error "gText_Rom_2E3585 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E3585) < 0x6
	.space 0x6 - (. - gText_Rom_2E3585)
	.endif
	.space 0x5, 0x00
