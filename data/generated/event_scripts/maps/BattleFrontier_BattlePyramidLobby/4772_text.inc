	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:571 BattleFrontier_BattlePyramidLobby_Text_ExchangedBagForBattleBag
	.globl gText_Rom_22C8EA
gText_Rom_22C8EA: @ 0x0822C8EA
	.string "{PLAYER}は バッグを あずけて\nバトルバッグを うけとった!$"
	.if (. - gText_Rom_22C8EA) > 0x1d
	.error "gText_Rom_22C8EA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22C8EA) < 0x1d
	.space 0x1d - (. - gText_Rom_22C8EA)
	.endif
