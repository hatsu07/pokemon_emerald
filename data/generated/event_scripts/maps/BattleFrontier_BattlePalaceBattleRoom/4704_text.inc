	@ data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.inc:467 BattleFrontier_BattlePalaceBattleRoom_Text_PreparedFor7thOpponent
	.globl gText_Rom_22B8EB
gText_Rom_22B8EB: @ 0x0822B8EB
	.string "つぎは 7にんめの あいて だが\nじゅんびは よろしいか?$"
	.if (. - gText_Rom_22B8EB) > 0x1e
	.error "gText_Rom_22B8EB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22B8EB) < 0x1e
	.space 0x1e - (. - gText_Rom_22B8EB)
	.endif
