	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:390 BattleFrontier_BattleFactoryLobby_Text_AwardBattlePointsForStreak
	.globl gText_Rom_231571
gText_Rom_231571: @ 0x08231571
	.string "7れんしょうを きねんして\nバトルポイントを さしあげます!"
	.byte EOS
	.if (. - gText_Rom_231571) > 0x1f
	.error "gText_Rom_231571 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_231571) < 0x1f
	.space 0x1f - (. - gText_Rom_231571)
	.endif
