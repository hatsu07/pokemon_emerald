	@ data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.inc:443 BattleFrontier_BattlePalaceBattleRoom_Text_LetMeRestoreYourMons
	.globl gText_Rom_22B83B
gText_Rom_22B83B: @ 0x0822B83B
	.string "おみごと……\nポケモンを かいふくして やろう……{EOS}"
	.if (. - gText_Rom_22B83B) > 0x1a
	.error "gText_Rom_22B83B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22B83B) < 0x1a
	.space 0x1a - (. - gText_Rom_22B83B)
	.endif
