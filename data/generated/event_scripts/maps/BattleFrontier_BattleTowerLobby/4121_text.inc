	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:1019 BattleFrontier_BattleTowerLobby_Text_ShowYouToBattleRoom
	.globl gText_Rom_220A1E
gText_Rom_220A1E: @ 0x08220A1E
	.string "それでは {STR_VAR_1} バトルルームに\nごあんない いたします!"
	.byte EOS
	.if (. - gText_Rom_220A1E) > 0x1d
	.error "gText_Rom_220A1E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_220A1E) < 0x1d
	.space 0x1d - (. - gText_Rom_220A1E)
	.endif
