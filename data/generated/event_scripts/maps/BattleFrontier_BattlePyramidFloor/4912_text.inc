	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:254 BattlePyramid_Text_TwoItemsRemaining2
	.globl gText_Rom_22DC6C
gText_Rom_22DC6C: @ 0x0822DC6C
	.string "かった ごほうびに\nヒミツを おしえて あげちゃう!\pここには どうぐが\nあと 2つ おちているの$"
	.if (. - gText_Rom_22DC6C) > 0x32
	.error "gText_Rom_22DC6C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22DC6C) < 0x32
	.space 0x32 - (. - gText_Rom_22DC6C)
	.endif
