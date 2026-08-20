	@ data/maps/Route110_TrickHousePuzzle4/scripts.inc:36 Route110_TrickHousePuzzle4_Text_CoraDefeat (+1 aliases)
	.globl gText_Rom_23EC12
gText_Rom_23EC12: @ 0x0823EC12
	.string "まけちゃった けど やっぱり\nしょうぶが いちばん たのしい!{EOS}"
	.if (. - gText_Rom_23EC12) > 0x20
	.error "gText_Rom_23EC12 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23EC12) < 0x20
	.space 0x20 - (. - gText_Rom_23EC12)
	.endif
