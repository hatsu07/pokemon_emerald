	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:369 BattleFrontier_BattleArenaLobby_Text_AwaitAnotherChallenge (+5 aliases)
	.globl gText_Rom_22FBE9
gText_Rom_22FBE9: @ 0x0822FBE9
	.string "またの ちょうせんを\nおまちして おりますぞ!"
	.byte EOS
	.if (. - gText_Rom_22FBE9) > 0x18
	.error "gText_Rom_22FBE9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22FBE9) < 0x18
	.space 0x18 - (. - gText_Rom_22FBE9)
	.endif
