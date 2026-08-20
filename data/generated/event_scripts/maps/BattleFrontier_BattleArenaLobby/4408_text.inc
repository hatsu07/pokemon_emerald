	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:461 BattleFrontier_BattleArenaLobby_Text_ReceivedPrize (+6 aliases)
	.globl gText_Rom_227865
gText_Rom_227865: @ 0x08227865
	.string "{PLAYER}は\n{STR_VAR_1}を もらった!{EOS}"
	.if (. - gText_Rom_227865) > 0xe
	.error "gText_Rom_227865 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_227865) < 0xe
	.space 0xe - (. - gText_Rom_227865)
	.endif
