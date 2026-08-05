	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:428 BattleFrontier_BattleFactoryLobby_Text_TakeDoublesChallenge
	.globl gText_Rom_23169E
gText_Rom_23169E: @ 0x0823169E
	.string "バトルトレード ダブルに\nちょうせん しますか?"
	.byte EOS
	.if (. - gText_Rom_23169E) > 0x19
	.error "gText_Rom_23169E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23169E) < 0x19
	.space 0x19 - (. - gText_Rom_23169E)
	.endif
