	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:1130 BattleFrontier_BattleDomeBattleRoom_Text_UnleashAllPowerIPossess
	.globl gText_Rom_229B82
gText_Rom_229B82: @ 0x08229B82
	.string "さあっ! わたしの すべてっ!\nここに ひろう するよっ!!$"
	.if (. - gText_Rom_229B82) > 0x1f
	.error "gText_Rom_229B82 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_229B82) < 0x1f
	.space 0x1f - (. - gText_Rom_229B82)
	.endif
