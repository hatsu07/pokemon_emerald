	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:461 BattleFrontier_BattleArenaLobby_Text_ReceivedPrize (+6 aliases)
	.globl gText_Rom_22CB7F
gText_Rom_22CB7F: @ 0x0822CB7F
	.string "{PLAYER}は\n{STR_VAR_1}を もらった!{EOS}"
	.if (. - gText_Rom_22CB7F) > 0xe
	.error "gText_Rom_22CB7F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22CB7F) < 0xe
	.space 0xe - (. - gText_Rom_22CB7F)
	.endif
