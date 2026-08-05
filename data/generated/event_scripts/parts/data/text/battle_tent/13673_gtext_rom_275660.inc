	@ data/text/battle_tent.inc:308 SlateportCity_BattleTentLobby_Text_DidntSaveBeforeQuitting
	.globl gText_Rom_275660
gText_Rom_275660: @ 0x08275660
	.string "おきゃくさまー!!\pぜんかい ちゃんと レポートを かいて\nしゅうりょう しませんでしたね!\pざんねんですが\nちょうせんは むこうと なります!$"
	.if (. - gText_Rom_275660) > 0x49
	.error "gText_Rom_275660 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_275660) < 0x49
	.space 0x49 - (. - gText_Rom_275660)
	.endif
