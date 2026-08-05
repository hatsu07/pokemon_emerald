	@ data/maps/Route110_TrickHousePuzzle6/scripts.inc:51 Route110_TrickHousePuzzle6_Text_SophiaDefeat (+1 aliases)
	.globl gText_Rom_23FDE5
gText_Rom_23FDE5: @ 0x0823FDE5
	.string "つよい トレーナーを はっけん!$"
	.if (. - gText_Rom_23FDE5) > 0x11
	.error "gText_Rom_23FDE5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23FDE5) < 0x11
	.space 0x11 - (. - gText_Rom_23FDE5)
	.endif
