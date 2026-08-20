	@ data/text/battle_tent.inc:256 SlateportCity_BattleTentLobby_Text_WhichLevelMode
	.globl gText_Rom_2754B2
gText_Rom_2754B2: @ 0x082754B2
	.string "レベル50と レベル100の イベント\nどちらに ちょうせん しますか?{EOS}"
	.if (. - gText_Rom_2754B2) > 0x25
	.error "gText_Rom_2754B2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2754B2) < 0x25
	.space 0x25 - (. - gText_Rom_2754B2)
	.endif
