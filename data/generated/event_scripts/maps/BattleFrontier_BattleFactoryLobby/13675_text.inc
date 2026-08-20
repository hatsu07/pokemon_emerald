	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:413 BattleFrontier_BattleFactoryLobby_Text_WellReturnMons (+1 aliases)
	.globl gText_Rom_2756A9
gText_Rom_2756A9: @ 0x082756A9
	.string "おきゃくさまの ポケモンを\nおかえしします!{EOS}"
	.if (. - gText_Rom_2756A9) > 0x17
	.error "gText_Rom_2756A9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2756A9) < 0x17
	.space 0x17 - (. - gText_Rom_2756A9)
	.endif
