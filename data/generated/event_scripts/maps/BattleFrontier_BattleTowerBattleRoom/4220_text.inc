	@ data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.inc:434 BattleFrontier_BattleTowerBattleRoom_Text_RestoreMonsToFullHealth
	.globl gText_Rom_22230B
gText_Rom_22230B: @ 0x0822230B
	.string "ポケモンの たいりょくを\nかいふくして さしあげます"
	.byte EOS
	.if (. - gText_Rom_22230B) > 0x1b
	.error "gText_Rom_22230B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22230B) < 0x1b
	.space 0x1b - (. - gText_Rom_22230B)
	.endif
