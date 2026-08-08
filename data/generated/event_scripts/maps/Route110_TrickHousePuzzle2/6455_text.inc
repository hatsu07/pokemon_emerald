	@ data/maps/Route110_TrickHousePuzzle2/scripts.inc:117 Route110_TrickHousePuzzle2_Text_PaulDefeat (+1 aliases)
	.globl gText_Rom_23E240
gText_Rom_23E240: @ 0x0823E240
	.string "ポケモンしょうぶも\nそんなに つよいの?$"
	.if (. - gText_Rom_23E240) > 0x15
	.error "gText_Rom_23E240 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23E240) < 0x15
	.space 0x15 - (. - gText_Rom_23E240)
	.endif
