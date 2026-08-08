	@ data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.inc:489 BattleFrontier_BattleFactoryPreBattleRoom_Text_SaveAndQuitGame
	.globl gText_Rom_2324CA
gText_Rom_2324CA: @ 0x082324CA
	.string "レポートを かいて\nしゅうりょう なさいますか?"
	.byte EOS
	.if (. - gText_Rom_2324CA) > 0x19
	.error "gText_Rom_2324CA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2324CA) < 0x19
	.space 0x19 - (. - gText_Rom_2324CA)
	.endif
