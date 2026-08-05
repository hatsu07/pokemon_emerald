	@ src/battle_main.c:336 battle_main_line_336
	.globl gText_Rom_2E36DA
gText_Rom_2E36DA: @ 0x082E36DA
	.string "センパイとコウハイ$"
	.if (. - gText_Rom_2E36DA) > 0xa
	.error "gText_Rom_2E36DA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E36DA) < 0xa
	.space 0xa - (. - gText_Rom_2E36DA)
	.endif
	.space 0x1, 0x00
