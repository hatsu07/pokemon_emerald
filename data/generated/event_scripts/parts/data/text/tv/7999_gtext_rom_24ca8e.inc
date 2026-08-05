	@ data/text/tv.inc:34 BattleFrontier_BattleTowerLobby_Text_SorryWeDisturbedYou
	.globl gText_Rom_24CA8E
gText_Rom_24CA8E: @ 0x0824CA8E
	.string "あぁ!\nごめんなさい\pじゃあ またこんど バトルタワーに きたら\nきかせて くださいね$"
	.if (. - gText_Rom_24CA8E) > 0x2c
	.error "gText_Rom_24CA8E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24CA8E) < 0x2c
	.space 0x2c - (. - gText_Rom_24CA8E)
	.endif
