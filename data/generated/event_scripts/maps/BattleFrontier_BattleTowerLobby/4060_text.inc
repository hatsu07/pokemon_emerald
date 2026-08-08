	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:930 BattleFrontier_BattleTowerLobby_Text_DirectYouToBattleRoom
	.globl gText_Rom_22059B
gText_Rom_22059B: @ 0x0822059B
	.string "それでは バトルルームへ\nごあんない します!"
	.byte EOS
	.if (. - gText_Rom_22059B) > 0x18
	.error "gText_Rom_22059B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22059B) < 0x18
	.space 0x18 - (. - gText_Rom_22059B)
	.endif
