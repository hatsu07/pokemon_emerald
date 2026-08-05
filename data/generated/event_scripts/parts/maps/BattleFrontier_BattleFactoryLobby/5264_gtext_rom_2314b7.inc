	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:366 BattleFrontier_BattleFactoryLobby_Text_WillHoldMonsForSafekeeping (+1 aliases)
	.globl gText_Rom_2314B7
gText_Rom_2314B7: @ 0x082314B7
	.string "それでは ポケモンを\nおあずかり します!"
	.byte EOS
	.if (. - gText_Rom_2314B7) > 0x16
	.error "gText_Rom_2314B7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2314B7) < 0x16
	.space 0x16 - (. - gText_Rom_2314B7)
	.endif
