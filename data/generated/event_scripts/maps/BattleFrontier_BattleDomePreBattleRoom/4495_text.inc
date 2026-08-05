	@ data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.inc:340 BattleFrontier_BattleDomePreBattleRoom_Text_TourneyInRound1
	.globl gText_Rom_228664
gText_Rom_228664: @ 0x08228664
	.string "げんざい トーナメントは\n1かいせん です!$"
	.if (. - gText_Rom_228664) > 0x17
	.error "gText_Rom_228664 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_228664) < 0x17
	.space 0x17 - (. - gText_Rom_228664)
	.endif
