	@ data/maps/BattleFrontier_OutsideWest/scripts.inc:372 BattleFrontier_OutsideWest_Text_LostIllPutOffPikeChallenge
	.globl gText_Rom_21F26C
gText_Rom_21F26C: @ 0x0821F26C
	.string "あーあ まけちゃったあ……\pいまは うんが わるいみたい\nバトルチューブは また あしたにしよ"
	.byte EOS
	.if (. - gText_Rom_21F26C) > 0x30
	.error "gText_Rom_21F26C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21F26C) < 0x30
	.space 0x30 - (. - gText_Rom_21F26C)
	.endif
