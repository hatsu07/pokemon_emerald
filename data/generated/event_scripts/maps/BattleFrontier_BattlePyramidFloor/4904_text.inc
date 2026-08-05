	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:242 BattlePyramid_Text_SixItemsRemaining2
	.globl gText_Rom_22DBA4
gText_Rom_22DBA4: @ 0x0822DBA4
	.string "かった ごほうびに\nヒミツを おしえて あげちゃう!\pここには どうぐが\nあと 6つ おちているの$"
	.if (. - gText_Rom_22DBA4) > 0x32
	.error "gText_Rom_22DBA4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22DBA4) < 0x32
	.space 0x32 - (. - gText_Rom_22DBA4)
	.endif
