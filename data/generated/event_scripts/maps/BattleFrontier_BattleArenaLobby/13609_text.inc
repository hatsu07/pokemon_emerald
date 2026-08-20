	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:369 BattleFrontier_BattleArenaLobby_Text_AwaitAnotherChallenge (+5 aliases)
	.globl gText_Rom_274ED5
gText_Rom_274ED5: @ 0x08274ED5
	.string "またの ちょうせんを\nおまちして おりますぞ!{EOS}"
	.if (. - gText_Rom_274ED5) > 0x18
	.error "gText_Rom_274ED5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274ED5) < 0x18
	.space 0x18 - (. - gText_Rom_274ED5)
	.endif
