	@ data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.inc:523 BattleFrontier_BattlePalaceBattleRoom_Text_LetsSeeFrontierPass
	.globl gText_Rom_22BAC7
gText_Rom_22BAC7: @ 0x0822BAC7
	.string "やれやれ あのまま いげんを たもって\nおいて くだされば よい ものを……\pおい! フロンティアパスを かさんか!$"
	.if (. - gText_Rom_22BAC7) > 0x3b
	.error "gText_Rom_22BAC7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22BAC7) < 0x3b
	.space 0x3b - (. - gText_Rom_22BAC7)
	.endif
