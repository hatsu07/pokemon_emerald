	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:251 BattlePyramid_Text_ThreeItemsRemaining2
	.globl gText_Rom_22DC3A
gText_Rom_22DC3A: @ 0x0822DC3A
	.string "かった ごほうびに\nヒミツを おしえて あげちゃう!\pここには どうぐが\nあと 3つ おちているの$"
	.if (. - gText_Rom_22DC3A) > 0x32
	.error "gText_Rom_22DC3A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22DC3A) < 0x32
	.space 0x32 - (. - gText_Rom_22DC3A)
	.endif
