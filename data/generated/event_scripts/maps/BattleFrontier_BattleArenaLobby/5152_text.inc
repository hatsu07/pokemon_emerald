	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:472 BattleFrontier_BattleArenaLobby_Text_ThankYouWaitWhileSave
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_22FBC2
gText_Rom_22FBC2: @ 0x0822FBC2
	.string "おつかれさまでした!\pせいせきを レポートに かきますので\nおまちくだされ!"
	.byte EOS
	.if (. - gText_Rom_22FBC2) != 0x27
	.error "gText_Rom_22FBC2 must retain its original byte length"
	.endif
	.globl gText_Rom_22FBCD
	.set gText_Rom_22FBCD, gText_Rom_22FBC2 + 0xb
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
