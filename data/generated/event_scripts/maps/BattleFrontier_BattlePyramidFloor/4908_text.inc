	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:248 BattlePyramid_Text_FourItemsRemaining2
	.globl gText_Rom_22DC08
gText_Rom_22DC08: @ 0x0822DC08
	.string "かった ごほうびに\nヒミツを おしえて あげちゃう!\pここには どうぐが\nあと 4つ おちているの$"
	.if (. - gText_Rom_22DC08) > 0x32
	.error "gText_Rom_22DC08 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22DC08) < 0x32
	.space 0x32 - (. - gText_Rom_22DC08)
	.endif
