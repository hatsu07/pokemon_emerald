	@ data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.inc:86 LilycoveCity_CoveLilyMotel_2F_Text_NeverLeaveWithoutGameBoy
	.globl gText_Rom_205AA6
gText_Rom_205AA6: @ 0x08205AA6
	.string "いつ どこで たいせんや しょうぶを\nいどまれるか わからないからな\lゲームボーイ アドバンスは てばなせないよ!{EOS}"
	.if (. - gText_Rom_205AA6) > 0x3a
	.error "gText_Rom_205AA6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_205AA6) < 0x3a
	.space 0x3a - (. - gText_Rom_205AA6)
	.endif
