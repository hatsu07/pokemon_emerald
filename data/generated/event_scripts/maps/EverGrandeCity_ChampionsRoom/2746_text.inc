	@ data/maps/EverGrandeCity_ChampionsRoom/scripts.inc:249 EverGrandeCity_ChampionsRoom_Text_WallaceComeWithMe
	.globl gText_Rom_210F33
gText_Rom_210F33: @ 0x08210F33
	.string "ミクリ『{PLAYER}{KUN}\p……いや あらためて よびなおそう\pあたらしい チャンピオン!\pさあ わたしに ついて きたまえ{EOS}"
	.if (. - gText_Rom_210F33) > 0x3a
	.error "gText_Rom_210F33 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_210F33) < 0x3a
	.space 0x3a - (. - gText_Rom_210F33)
	.endif
