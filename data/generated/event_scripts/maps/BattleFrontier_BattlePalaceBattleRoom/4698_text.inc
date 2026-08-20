	@ data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.inc:455 BattleFrontier_BattlePalaceBattleRoom_Text_PreparedFor4thOpponent
	.globl gText_Rom_22B891
gText_Rom_22B891: @ 0x0822B891
	.string "つぎは 4にんめの あいて だが\nじゅんびは よろしいか?{EOS}"
	.if (. - gText_Rom_22B891) > 0x1e
	.error "gText_Rom_22B891 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22B891) < 0x1e
	.space 0x1e - (. - gText_Rom_22B891)
	.endif
