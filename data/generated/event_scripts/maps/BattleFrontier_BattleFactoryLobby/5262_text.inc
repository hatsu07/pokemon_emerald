	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:361 BattleFrontier_BattleFactoryLobby_Text_OkayToSaveBeforeChallenge (+1 aliases)
	.globl gText_Rom_23148F
gText_Rom_23148F: @ 0x0823148F
	.string "では ちょうせんを はじめる まえに\nレポートを かきますが よろしいですか?"
	.byte EOS
	.if (. - gText_Rom_23148F) > 0x28
	.error "gText_Rom_23148F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23148F) < 0x28
	.space 0x28 - (. - gText_Rom_23148F)
	.endif
