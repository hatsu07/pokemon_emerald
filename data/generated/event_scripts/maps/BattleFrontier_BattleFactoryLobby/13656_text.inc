	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:366 BattleFrontier_BattleFactoryLobby_Text_WillHoldMonsForSafekeeping (+1 aliases)
	.globl gText_Rom_2754FF
gText_Rom_2754FF: @ 0x082754FF
	.string "それでは ポケモンを\nおあずかり します!{EOS}"
	.if (. - gText_Rom_2754FF) > 0x16
	.error "gText_Rom_2754FF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2754FF) < 0x16
	.space 0x16 - (. - gText_Rom_2754FF)
	.endif
