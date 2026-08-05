	@ data/maps/Route110_TrickHousePuzzle1/scripts.inc:54 Route110_TrickHousePuzzle1_Text_EddieDefeat (+1 aliases)
	.globl gText_Rom_23DFEB
gText_Rom_23DFEB: @ 0x0823DFEB
	.string "おまけに まけちゃった……"
	.byte EOS
	.if (. - gText_Rom_23DFEB) > 0xe
	.error "gText_Rom_23DFEB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23DFEB) < 0xe
	.space 0xe - (. - gText_Rom_23DFEB)
	.endif
