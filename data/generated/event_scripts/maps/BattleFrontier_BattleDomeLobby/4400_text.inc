	@ data/maps/BattleFrontier_BattleDomeLobby/scripts.inc:506 BattleFrontier_BattleDomeLobby_Text_ShowYouToBattleDome
	.globl gText_Rom_2277BF
gText_Rom_2277BF: @ 0x082277BF
	.string "それでは バトルドームへ\nごあんない します!{EOS}"
	.if (. - gText_Rom_2277BF) > 0x18
	.error "gText_Rom_2277BF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2277BF) < 0x18
	.space 0x18 - (. - gText_Rom_2277BF)
	.endif
