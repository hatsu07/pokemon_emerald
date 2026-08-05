	@ data/maps/BattleFrontier_BattlePyramidTop/scripts.inc:240 BattleFrontier_BattlePyramidTop_Text_LookForwardToNextMeeting
	.globl gText_Rom_22EFE4
gText_Rom_22EFE4: @ 0x0822EFE4
	.string "わかき ぼうけんしゃよ!\nまた あえる ときを まっているぞ!!"
	.byte EOS
	.if (. - gText_Rom_22EFE4) > 0x21
	.error "gText_Rom_22EFE4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22EFE4) < 0x21
	.space 0x21 - (. - gText_Rom_22EFE4)
	.endif
