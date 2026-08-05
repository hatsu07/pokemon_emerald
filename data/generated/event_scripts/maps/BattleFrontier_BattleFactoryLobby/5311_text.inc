	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:510 BattleFrontier_BattleFactoryLobby_Text_RulesAreListed
	.globl gText_Rom_231A91
gText_Rom_231A91: @ 0x08231A91
	.string "バトルトレードの ルールが かかれている!"
	.byte EOS
	.if (. - gText_Rom_231A91) > 0x16
	.error "gText_Rom_231A91 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_231A91) < 0x16
	.space 0x16 - (. - gText_Rom_231A91)
	.endif
