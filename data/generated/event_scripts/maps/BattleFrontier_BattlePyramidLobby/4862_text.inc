	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:708 BattleFrontier_BattlePyramidLobby_Text_GiveYouTheseBattlePoints
	.globl gText_Rom_22D2EA
gText_Rom_22D2EA: @ 0x0822D2EA
	.string "ぼうけんしゃよ!\nあなたの あつい ゆうきを たたえ\lバトルポイントを おおくり しましょう!$"
	.if (. - gText_Rom_22D2EA) > 0x30
	.error "gText_Rom_22D2EA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22D2EA) < 0x30
	.space 0x30 - (. - gText_Rom_22D2EA)
	.endif
