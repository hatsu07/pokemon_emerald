	@ data/maps/Route110_TrickHousePuzzle4/scripts.inc:39 Route110_TrickHousePuzzle4_Text_CoraPostBattle
	.globl gText_Rom_23EC32
gText_Rom_23EC32: @ 0x0823EC32
	.string "トレーナーが いそうな ところは\nどこにでも いきたく なるわよね!{EOS}"
	.if (. - gText_Rom_23EC32) > 0x23
	.error "gText_Rom_23EC32 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23EC32) < 0x23
	.space 0x23 - (. - gText_Rom_23EC32)
	.endif
