	@ data/text/battle_tent.inc:198 VerdanturfTown_BattleTentLobby_Text_NowFollowMe
	.globl gText_Rom_22A6BB
gText_Rom_22A6BB: @ 0x0822A6BB
	.string "それでは\nわしに ついてこい……$"
	.if (. - gText_Rom_22A6BB) > 0x11
	.error "gText_Rom_22A6BB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22A6BB) < 0x11
	.space 0x11 - (. - gText_Rom_22A6BB)
	.endif
