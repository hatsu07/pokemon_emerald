	@ data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.inc:492 BattleFrontier_BattlePalaceBattleRoom_Text_ReadyForPalaceMaven
	.globl gText_Rom_22B9A6
gText_Rom_22B9A6: @ 0x0822B9A6
	.string "パレスガーディアンを およびする\n……かくごは よいか?{EOS}"
	.if (. - gText_Rom_22B9A6) > 0x1d
	.error "gText_Rom_22B9A6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22B9A6) < 0x1d
	.space 0x1d - (. - gText_Rom_22B9A6)
	.endif
