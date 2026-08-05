	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:496 BattleFrontier_BattleArenaLobby_Text_LandingHitsWorked
	.globl gText_Rom_22FC95
gText_Rom_22FC95: @ 0x0822FC95
	.string "はんていで かったぜ!\pあいての ポケモンに\nわざを かくじつに あてたのが よかったぜ!"
	.byte EOS
	.if (. - gText_Rom_22FC95) > 0x2e
	.error "gText_Rom_22FC95 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22FC95) < 0x2e
	.space 0x2e - (. - gText_Rom_22FC95)
	.endif
