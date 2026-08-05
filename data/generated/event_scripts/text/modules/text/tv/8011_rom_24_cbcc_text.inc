	@ data/text/tv.inc:52 BattleFrontier_BattleTowerLobby_Text_LookingForwardToNextBattle
	.globl gText_Rom_24CBCC
gText_Rom_24CBCC: @ 0x0824CBCC
	.string "つぎの たたかいも\nきたい してますよ$"
	.if (. - gText_Rom_24CBCC) > 0x14
	.error "gText_Rom_24CBCC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24CBCC) < 0x14
	.space 0x14 - (. - gText_Rom_24CBCC)
	.endif
