	@ data/text/battle_tent.inc:220 SlateportCity_BattleTentLobby_Text_WelcomeToBattleTent
	.globl gText_Rom_275307
gText_Rom_275307: @ 0x08275307
	.string "バトルテント カイナかいじょうへ\nようこそ!\pバトルトレードの\nごあんないは こちらです!$"
	.if (. - gText_Rom_275307) > 0x2e
	.error "gText_Rom_275307 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_275307) < 0x2e
	.space 0x2e - (. - gText_Rom_275307)
	.endif
