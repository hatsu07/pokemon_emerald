	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:332 BattleFrontier_BattleFactoryLobby_Text_TakeSinglesChallenge
	.globl gText_Rom_231305
gText_Rom_231305: @ 0x08231305
	.string "バトルトレード シングルに\nちょうせん しますか?"
	.byte EOS
	.if (. - gText_Rom_231305) > 0x1a
	.error "gText_Rom_231305 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_231305) < 0x1a
	.space 0x1a - (. - gText_Rom_231305)
	.endif
