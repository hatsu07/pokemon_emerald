	@ data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.inc:463 BattleFrontier_BattlePalaceBattleRoom_Text_PreparedFor6thOpponent
	.globl gText_Rom_22B8CD
gText_Rom_22B8CD: @ 0x0822B8CD
	.string "つぎは 6にんめの あいて だが\nじゅんびは よろしいか?{EOS}"
	.if (. - gText_Rom_22B8CD) > 0x1e
	.error "gText_Rom_22B8CD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22B8CD) < 0x1e
	.space 0x1e - (. - gText_Rom_22B8CD)
	.endif
