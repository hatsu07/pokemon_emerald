	@ data/maps/BattleFrontier_BattlePyramidTop/scripts.inc:231 BattleFrontier_BattlePyramidTop_Text_BringCourageToOurBattle
	.globl gText_Rom_22EF6A
gText_Rom_22EF6A: @ 0x0822EF6A
	.string "さあ! きみの あつい ゆうきを\nぶつけて きたまえ!"
	.byte EOS
	.if (. - gText_Rom_22EF6A) > 0x1c
	.error "gText_Rom_22EF6A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22EF6A) < 0x1c
	.space 0x1c - (. - gText_Rom_22EF6A)
	.endif
