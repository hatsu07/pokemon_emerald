	@ data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.inc:475 BattleFrontier_BattlePalaceBattleRoom_Text_WishToQuitChallenge
	.globl gText_Rom_22B91F
gText_Rom_22B91F: @ 0x0822B91F
	.string "ちょうせんを ちゅうし するのか?$"
	.if (. - gText_Rom_22B91F) > 0x12
	.error "gText_Rom_22B91F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22B91F) < 0x12
	.space 0x12 - (. - gText_Rom_22B91F)
	.endif
