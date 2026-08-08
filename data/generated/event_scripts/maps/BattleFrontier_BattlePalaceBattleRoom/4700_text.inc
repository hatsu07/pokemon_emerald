	@ data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.inc:459 BattleFrontier_BattlePalaceBattleRoom_Text_PreparedFor5thOpponent
	.globl gText_Rom_22B8AF
gText_Rom_22B8AF: @ 0x0822B8AF
	.string "つぎは 5にんめの あいて だが\nじゅんびは よろしいか?$"
	.if (. - gText_Rom_22B8AF) > 0x1e
	.error "gText_Rom_22B8AF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22B8AF) < 0x1e
	.space 0x1e - (. - gText_Rom_22B8AF)
	.endif
