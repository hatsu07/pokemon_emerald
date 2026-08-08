	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:577 BattleFrontier_BattlePyramidLobby_Text_DidntSaveBeforeQuittingTakeBag
	.globl gText_Rom_22C956
gText_Rom_22C956: @ 0x0822C956
	.string "ぼうけんしゃよ!\pぜんかい レポートを かいて\nしゅうりょう しませんでしたな?\pざんねんですが この ばあい\nちょうせんは むこうと なりますぞ!\pおあずかり していた\nバッグは おかえし いたしますぞ!\p{PLAYER}は\nバッグを うけとった!$"
	.if (. - gText_Rom_22C956) > 0x78
	.error "gText_Rom_22C956 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22C956) < 0x78
	.space 0x78 - (. - gText_Rom_22C956)
	.endif
