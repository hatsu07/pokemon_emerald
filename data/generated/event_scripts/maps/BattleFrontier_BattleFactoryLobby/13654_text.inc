	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:361 BattleFrontier_BattleFactoryLobby_Text_OkayToSaveBeforeChallenge (+1 aliases)
	.globl gText_Rom_2754D7
gText_Rom_2754D7: @ 0x082754D7
	.string "では ちょうせんを はじめる まえに\nレポートを かきますが よろしいですか?$"
	.if (. - gText_Rom_2754D7) > 0x28
	.error "gText_Rom_2754D7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2754D7) < 0x28
	.space 0x28 - (. - gText_Rom_2754D7)
	.endif
