	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:1092 BattleFrontier_BattleDomeBattleRoom_Text_SeeYourFrontierPass
	.globl gText_Rom_2299DB
gText_Rom_2299DB: @ 0x082299DB
	.string "ヒース『きまり だからねっ!\nキミの フロンティアパスを かしてっ!!$"
	.if (. - gText_Rom_2299DB) > 0x24
	.error "gText_Rom_2299DB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2299DB) < 0x24
	.space 0x24 - (. - gText_Rom_2299DB)
	.endif
