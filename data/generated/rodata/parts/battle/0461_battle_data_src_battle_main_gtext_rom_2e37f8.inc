	@ src/battle_main.c:362 battle_main_line_362
	.globl gText_Rom_2E37F8
gText_Rom_2E37F8: @ 0x082E37F8
	.string "パレスガーディアン$"
	.if (. - gText_Rom_2E37F8) > 0xa
	.error "gText_Rom_2E37F8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E37F8) < 0xa
	.space 0xa - (. - gText_Rom_2E37F8)
	.endif
	.space 0x1, 0x00
