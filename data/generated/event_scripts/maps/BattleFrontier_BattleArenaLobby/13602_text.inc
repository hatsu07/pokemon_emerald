	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:461 BattleFrontier_BattleArenaLobby_Text_ReceivedPrize (+6 aliases)
	.globl gText_Rom_274E74
gText_Rom_274E74: @ 0x08274E74
	.string "{PLAYER}は\n{STR_VAR_1}を もらった!{EOS}"
	.if (. - gText_Rom_274E74) > 0xe
	.error "gText_Rom_274E74 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274E74) < 0xe
	.space 0xe - (. - gText_Rom_274E74)
	.endif
