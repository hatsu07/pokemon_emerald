	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:985 BattleFrontier_BattleDomeBattleRoom_Text_WillTheyRaceToChampionship
	.globl gText_Rom_2296B5
gText_Rom_2296B5: @ 0x082296B5
	.string "いっきに ゆうしょうまで\nのぼりつめて しまうのでしょうか!?\p$"
	.if (. - gText_Rom_2296B5) > 0x21
	.error "gText_Rom_2296B5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2296B5) < 0x21
	.space 0x21 - (. - gText_Rom_2296B5)
	.endif
