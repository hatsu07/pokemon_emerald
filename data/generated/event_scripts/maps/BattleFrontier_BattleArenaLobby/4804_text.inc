	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:369 BattleFrontier_BattleArenaLobby_Text_AwaitAnotherChallenge (+5 aliases)
	.globl gText_Rom_22CBF4
gText_Rom_22CBF4: @ 0x0822CBF4
	.string "またの ちょうせんを\nおまちして おりますぞ!{EOS}"
	.if (. - gText_Rom_22CBF4) > 0x18
	.error "gText_Rom_22CBF4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22CBF4) < 0x18
	.space 0x18 - (. - gText_Rom_22CBF4)
	.endif
