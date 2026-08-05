	@ src/battle_main.c:341 battle_main_line_341 (+1 aliases)
	.globl gText_Rom_2E3711
gText_Rom_2E3711: @ 0x082E3711
	.string "つりびと$"
	.if (. - gText_Rom_2E3711) > 0x5
	.error "gText_Rom_2E3711 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E3711) < 0x5
	.space 0x5 - (. - gText_Rom_2E3711)
	.endif
	.space 0x6, 0x00
