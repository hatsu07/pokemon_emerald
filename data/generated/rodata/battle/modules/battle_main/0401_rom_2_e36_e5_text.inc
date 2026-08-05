	@ src/battle_main.c:337 battle_main_line_337
	.globl gText_Rom_2E36E5
gText_Rom_2E36E5: @ 0x082E36E5
	.string "カチヌキさんち$"
	.if (. - gText_Rom_2E36E5) > 0x8
	.error "gText_Rom_2E36E5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E36E5) < 0x8
	.space 0x8 - (. - gText_Rom_2E36E5)
	.endif
	.space 0x3, 0x00
