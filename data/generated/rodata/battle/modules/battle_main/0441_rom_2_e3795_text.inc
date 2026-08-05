	@ src/battle_main.c:353 battle_main_line_353 (+1 aliases)
	.globl gText_Rom_2E3795
gText_Rom_2E3795: @ 0x082E3795
	.string "むしとりしょうねん$"
	.if (. - gText_Rom_2E3795) > 0xa
	.error "gText_Rom_2E3795 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E3795) < 0xa
	.space 0xa - (. - gText_Rom_2E3795)
	.endif
	.space 0x1, 0x00
