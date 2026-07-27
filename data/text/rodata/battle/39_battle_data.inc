	@ src/battle_main.c:379 battle_main_line_379 (+1 aliases)
	.globl gText_Rom_2EB204
gText_Rom_2EB204: @ 0x082EB204
	.string "どろぼう$"
	.if (. - gText_Rom_2EB204) > 0x5
	.error "gText_Rom_2EB204 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB204) < 0x5
	.space 0x5 - (. - gText_Rom_2EB204)
	.endif
	.incbin "baserom.gba", 0x2eb209, 0x3

