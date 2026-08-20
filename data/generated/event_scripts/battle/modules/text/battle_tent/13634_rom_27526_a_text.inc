	@ data/text/battle_tent.inc:198 VerdanturfTown_BattleTentLobby_Text_NowFollowMe
	.globl gText_Rom_27526A
gText_Rom_27526A: @ 0x0827526A
	.string "それでは\nわしに ついてこい……{EOS}"
	.if (. - gText_Rom_27526A) > 0x11
	.error "gText_Rom_27526A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27526A) < 0x11
	.space 0x11 - (. - gText_Rom_27526A)
	.endif
