	@ data/maps/Route110_TrickHousePuzzle1/scripts.inc:51 Route110_TrickHousePuzzle1_Text_EddieIntro (+1 aliases)
	.globl gText_Rom_23DFD6
gText_Rom_23DFD6: @ 0x0823DFD6
	.string "へんな やしきに\nまよいこんじゃった……"
	.byte EOS
	.if (. - gText_Rom_23DFD6) > 0x15
	.error "gText_Rom_23DFD6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23DFD6) < 0x15
	.space 0x15 - (. - gText_Rom_23DFD6)
	.endif
