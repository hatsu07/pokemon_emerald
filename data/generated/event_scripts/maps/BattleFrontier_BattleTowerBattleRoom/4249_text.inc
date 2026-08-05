	@ data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.inc:497 BattleFrontier_BattleTowerBattleRoom_Text_ReadyForSalonMaiden
	.globl gText_Rom_2224E5
gText_Rom_2224E5: @ 0x082224E5
	.string "タワータイクーンとの たたかい です!\nかくごは よろしい ですか?$"
	.if (. - gText_Rom_2224E5) > 0x23
	.error "gText_Rom_2224E5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2224E5) < 0x23
	.space 0x23 - (. - gText_Rom_2224E5)
	.endif
