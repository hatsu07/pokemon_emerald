	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:447 BattleFrontier_BattleArenaLobby_Text_CongratsOnSevenWins
	.globl gText_Rom_22FB23
gText_Rom_22FB23: @ 0x0822FB23
	.string "7にんぬき たっせい\nおみごとで ございました!"
	.byte EOS
	.if (. - gText_Rom_22FB23) > 0x19
	.error "gText_Rom_22FB23 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22FB23) < 0x19
	.space 0x19 - (. - gText_Rom_22FB23)
	.endif
