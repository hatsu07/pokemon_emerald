	@ data/maps/Route110_TrickHousePuzzle1/scripts.inc:45 Route110_TrickHousePuzzle1_Text_SallyDefeat (+1 aliases)
	.globl gText_Rom_23DFB8
gText_Rom_23DFB8: @ 0x0823DFB8
	.string "ほんき ださないでよー!"
	.byte EOS
	.if (. - gText_Rom_23DFB8) > 0xd
	.error "gText_Rom_23DFB8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23DFB8) < 0xd
	.space 0xd - (. - gText_Rom_23DFB8)
	.endif
