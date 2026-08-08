	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:461 BattleFrontier_BattleArenaLobby_Text_ReceivedPrize (+6 aliases)
	.globl gText_Rom_22064B
gText_Rom_22064B: @ 0x0822064B
	.string "{PLAYER}は\n{STR_VAR_1}を もらった!"
	.byte EOS
	.if (. - gText_Rom_22064B) > 0xe
	.error "gText_Rom_22064B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22064B) < 0xe
	.space 0xe - (. - gText_Rom_22064B)
	.endif
