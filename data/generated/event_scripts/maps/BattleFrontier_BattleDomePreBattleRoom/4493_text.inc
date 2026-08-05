	@ data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.inc:336 BattleFrontier_BattleDomePreBattleRoom_Text_PlayersNextOpponentIsTrainer
	.globl gText_Rom_22864D
gText_Rom_22864D: @ 0x0822864D
	.string "{PLAYER}さんの\nつぎの あいては このかた です$"
	.if (. - gText_Rom_22864D) > 0x17
	.error "gText_Rom_22864D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22864D) < 0x17
	.space 0x17 - (. - gText_Rom_22864D)
	.endif
