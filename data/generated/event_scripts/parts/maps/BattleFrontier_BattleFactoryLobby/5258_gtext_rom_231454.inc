	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:354 BattleFrontier_BattleFactoryLobby_Text_LookForwardToNextVisit (+1 aliases)
	.globl gText_Rom_231454
gText_Rom_231454: @ 0x08231454
	.string "またの ごりようを おまちしていますよ!"
	.byte EOS
	.if (. - gText_Rom_231454) > 0x15
	.error "gText_Rom_231454 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_231454) < 0x15
	.space 0x15 - (. - gText_Rom_231454)
	.endif
