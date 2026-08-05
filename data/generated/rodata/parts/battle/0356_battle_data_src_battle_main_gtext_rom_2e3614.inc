	@ src/battle_main.c:318 battle_main_line_318 (+1 aliases)
	.globl gText_Rom_2E3614
gText_Rom_2E3614: @ 0x082E3614
	.string "いせきマニア$"
	.if (. - gText_Rom_2E3614) > 0x7
	.error "gText_Rom_2E3614 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E3614) < 0x7
	.space 0x7 - (. - gText_Rom_2E3614)
	.endif
	.space 0x4, 0x00
