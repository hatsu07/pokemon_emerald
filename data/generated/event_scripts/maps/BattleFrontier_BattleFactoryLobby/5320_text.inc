	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:529 BattleFrontier_BattleFactoryLobby_Text_ExplainSwapNumberRules
	.globl gText_Rom_231B6E
gText_Rom_231B6E: @ 0x08231B6E
	.string "いちど たたかいに かつ たびに\n1かい 1ひき だけ ポケモンを\lトレード することが できます\p1かいの ちょうせんで\nトレードが できるのは\l6にんめの トレーナーまで です"
	.byte EOS
	.if (. - gText_Rom_231B6E) > 0x5b
	.error "gText_Rom_231B6E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_231B6E) < 0x5b
	.space 0x5b - (. - gText_Rom_231B6E)
	.endif
