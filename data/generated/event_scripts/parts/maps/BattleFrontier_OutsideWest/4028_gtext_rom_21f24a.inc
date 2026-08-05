	@ data/maps/BattleFrontier_OutsideWest/scripts.inc:369 BattleFrontier_OutsideWest_Text_WonIllTakePikeChallenge
	.globl gText_Rom_21F24A
gText_Rom_21F24A: @ 0x0821F24A
	.string "わーい かっちゃった!\nよし バトルチューブに ちょうせん しよ!"
	.byte EOS
	.if (. - gText_Rom_21F24A) > 0x22
	.error "gText_Rom_21F24A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21F24A) < 0x22
	.space 0x22 - (. - gText_Rom_21F24A)
	.endif
