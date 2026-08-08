	@ data/maps/BattleFrontier_BattlePyramidTop/scripts.inc:249 BattleFrontier_BattlePyramidTop_Text_EverythingYouHave
	.globl gText_Rom_22F0D1
gText_Rom_22F0D1: @ 0x0822F0D1
	.string "きみの すべて!\nわたしが うけとめよう じゃないか!!"
	.byte EOS
	.if (. - gText_Rom_22F0D1) > 0x1d
	.error "gText_Rom_22F0D1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22F0D1) < 0x1d
	.space 0x1d - (. - gText_Rom_22F0D1)
	.endif
