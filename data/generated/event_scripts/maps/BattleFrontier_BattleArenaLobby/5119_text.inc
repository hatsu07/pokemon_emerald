	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:369 BattleFrontier_BattleArenaLobby_Text_AwaitAnotherChallenge (+5 aliases)
	.globl gText_Rom_22F75E
gText_Rom_22F75E: @ 0x0822F75E
	.string "またの ちょうせんを\nおまちして おりますぞ!"
	.byte EOS
	.if (. - gText_Rom_22F75E) > 0x18
	.error "gText_Rom_22F75E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22F75E) < 0x18
	.space 0x18 - (. - gText_Rom_22F75E)
	.endif
