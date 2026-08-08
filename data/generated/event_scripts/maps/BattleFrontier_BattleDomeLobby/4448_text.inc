	@ data/maps/BattleFrontier_BattleDomeLobby/scripts.inc:635 BattleFrontier_BattleDomeLobby_Text_NeedToCheckOpponentCarefully
	.globl gText_Rom_227C79
gText_Rom_227C79: @ 0x08227C79
	.string "この ポケモンを ひかえに していれば\nかてたんだよなー\pしあいに だす ポケモン えらびは\nあいての ポケモンを よく みることが\lほんとうに たいせつだよ!$"
	.if (. - gText_Rom_227C79) > 0x51
	.error "gText_Rom_227C79 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_227C79) < 0x51
	.space 0x51 - (. - gText_Rom_227C79)
	.endif
