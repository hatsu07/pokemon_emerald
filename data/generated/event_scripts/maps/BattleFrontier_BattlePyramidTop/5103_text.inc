	@ data/maps/BattleFrontier_BattlePyramidTop/scripts.inc:246 BattleFrontier_BattlePyramidTop_Text_MyCourageIsOffMeter
	.globl gText_Rom_22F0B0
gText_Rom_22F0B0: @ 0x0822F0B0
	.string "よーーーしっ!!\pわたしの ゆうきセンサーも\nぜっこうちょう!!"
	.byte EOS
	.if (. - gText_Rom_22F0B0) > 0x21
	.error "gText_Rom_22F0B0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22F0B0) < 0x21
	.space 0x21 - (. - gText_Rom_22F0B0)
	.endif
