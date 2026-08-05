	@ data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.inc:447 BattleFrontier_BattlePalaceBattleRoom_Text_PreparedFor2ndOpponent
	.globl gText_Rom_22B855
gText_Rom_22B855: @ 0x0822B855
	.string "つぎは 2にんめの あいて だが\nじゅんびは よろしいか?$"
	.if (. - gText_Rom_22B855) > 0x1e
	.error "gText_Rom_22B855 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22B855) < 0x1e
	.space 0x1e - (. - gText_Rom_22B855)
	.endif
