	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:354 BattleFrontier_BattleFactoryLobby_Text_LookForwardToNextVisit (+1 aliases)
	.globl gText_Rom_27549D
gText_Rom_27549D: @ 0x0827549D
	.string "またの ごりようを おまちしていますよ!$"
	.if (. - gText_Rom_27549D) > 0x15
	.error "gText_Rom_27549D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27549D) < 0x15
	.space 0x15 - (. - gText_Rom_27549D)
	.endif
