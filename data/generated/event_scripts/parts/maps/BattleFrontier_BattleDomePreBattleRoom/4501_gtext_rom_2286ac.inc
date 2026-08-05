	@ data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.inc:349 BattleFrontier_BattleDomePreBattleRoom_Text_TourneyInFinals
	.globl gText_Rom_2286AC
gText_Rom_2286AC: @ 0x082286AC
	.string "げんざい トーナメントは\nけっしょうせん です!$"
	.if (. - gText_Rom_2286AC) > 0x19
	.error "gText_Rom_2286AC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2286AC) < 0x19
	.space 0x19 - (. - gText_Rom_2286AC)
	.endif
