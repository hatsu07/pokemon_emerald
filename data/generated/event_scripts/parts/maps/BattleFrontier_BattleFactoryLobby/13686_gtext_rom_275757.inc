	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:523 BattleFrontier_BattleFactoryLobby_Text_ExplainSwapPartnerRules (+1 aliases)
	.globl gText_Rom_275757
gText_Rom_275757: @ 0x08275757
	.string "トレードが できる あいては\nあなたが たたかいで\lたおした トレーナーです\pトレードで うけとる ことが できるのは\nトレーナーが つかっていた ポケモンです$"
	.if (. - gText_Rom_275757) > 0x51
	.error "gText_Rom_275757 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_275757) < 0x51
	.space 0x51 - (. - gText_Rom_275757)
	.endif
