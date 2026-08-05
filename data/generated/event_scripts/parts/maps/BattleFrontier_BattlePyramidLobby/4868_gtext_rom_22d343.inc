	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:717 BattleFrontier_BattlePyramidLobby_Text_ExplainMonRules
	.globl gText_Rom_22D343
gText_Rom_22D343: @ 0x0822D343
	.string "ピラミッドの なかで でてくる\nやせい ポケモンは\lピラミッドを せいはすると かわります\pどんな ポケモンが でてくるのかは\nじっさいに ぼうけんして おぼえましょう$"
	.if (. - gText_Rom_22D343) > 0x55
	.error "gText_Rom_22D343 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22D343) < 0x55
	.space 0x55 - (. - gText_Rom_22D343)
	.endif
