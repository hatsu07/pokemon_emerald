	@ data/maps/Route110_TrickHousePuzzle1/scripts.inc:57 Route110_TrickHousePuzzle1_Text_EddiePostBattle
	.globl gText_Rom_23DFF9
gText_Rom_23DFF9: @ 0x0823DFF9
	.string "さらに まよっちゃった……\nでられない……"
	.byte EOS
	.if (. - gText_Rom_23DFF9) > 0x16
	.error "gText_Rom_23DFF9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23DFF9) < 0x16
	.space 0x16 - (. - gText_Rom_23DFF9)
	.endif
