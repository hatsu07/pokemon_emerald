	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:523 BattleFrontier_BattleFactoryLobby_Text_ExplainSwapPartnerRules (+1 aliases)
	.globl gText_Rom_231B1D
gText_Rom_231B1D: @ 0x08231B1D
	.string "トレードが できる あいては\nあなたが たたかいで\lたおした トレーナーです\pトレードで うけとる ことが できるのは\nトレーナーが つかっていた ポケモンです"
	.byte EOS
	.if (. - gText_Rom_231B1D) > 0x51
	.error "gText_Rom_231B1D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_231B1D) < 0x51
	.space 0x51 - (. - gText_Rom_231B1D)
	.endif
