	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:413 BattleFrontier_BattleFactoryLobby_Text_WellReturnMons (+1 aliases)
	.globl gText_Rom_231637
gText_Rom_231637: @ 0x08231637
	.string "おきゃくさまの ポケモンを\nおかえしします!"
	.byte EOS
	.if (. - gText_Rom_231637) > 0x17
	.error "gText_Rom_231637 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_231637) < 0x17
	.space 0x17 - (. - gText_Rom_231637)
	.endif
