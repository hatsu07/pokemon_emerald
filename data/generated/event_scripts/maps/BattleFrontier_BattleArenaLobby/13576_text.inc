	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:369 BattleFrontier_BattleArenaLobby_Text_AwaitAnotherChallenge (+5 aliases)
	.globl gText_Rom_274A8B
gText_Rom_274A8B: @ 0x08274A8B
	.string "またの ちょうせんを\nおまちして おりますぞ!{EOS}"
	.if (. - gText_Rom_274A8B) > 0x18
	.error "gText_Rom_274A8B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274A8B) < 0x18
	.space 0x18 - (. - gText_Rom_274A8B)
	.endif
