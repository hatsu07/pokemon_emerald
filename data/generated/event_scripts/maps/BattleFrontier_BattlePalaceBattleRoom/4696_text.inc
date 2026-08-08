	@ data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.inc:451 BattleFrontier_BattlePalaceBattleRoom_Text_PreparedFor3rdOpponent
	.globl gText_Rom_22B873
gText_Rom_22B873: @ 0x0822B873
	.string "つぎは 3にんめの あいて だが\nじゅんびは よろしいか?$"
	.if (. - gText_Rom_22B873) > 0x1e
	.error "gText_Rom_22B873 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22B873) < 0x1e
	.space 0x1e - (. - gText_Rom_22B873)
	.endif
