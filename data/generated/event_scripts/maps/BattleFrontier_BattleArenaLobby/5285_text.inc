	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:461 BattleFrontier_BattleArenaLobby_Text_ReceivedPrize (+6 aliases)
	.globl gText_Rom_23164E
gText_Rom_23164E: @ 0x0823164E
	.string "{PLAYER}は\n{STR_VAR_1}を もらった!"
	.byte EOS
	.if (. - gText_Rom_23164E) > 0xe
	.error "gText_Rom_23164E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23164E) < 0xe
	.space 0xe - (. - gText_Rom_23164E)
	.endif
