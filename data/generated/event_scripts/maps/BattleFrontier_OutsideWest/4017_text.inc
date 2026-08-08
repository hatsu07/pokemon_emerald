	@ data/maps/BattleFrontier_OutsideWest/scripts.inc:354 BattleFrontier_OutsideWest_Text_SureWeCanChallengeWithNoMons
	.globl gText_Rom_21F110
gText_Rom_21F110: @ 0x0821F110
	.string "なぁなぁ にいちゃん……\pほんとに じぶんの ポケモン いなくても\nちょうせん できるの? だいじょうぶ?"
	.byte EOS
	.if (. - gText_Rom_21F110) > 0x36
	.error "gText_Rom_21F110 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21F110) < 0x36
	.space 0x36 - (. - gText_Rom_21F110)
	.endif
