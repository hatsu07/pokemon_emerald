	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:421 BattleFrontier_BattleFactoryLobby_Text_WelcomeForDoubleBattle
	.globl gText_Rom_23165C
gText_Rom_23165C: @ 0x0823165C
	.string "トレーナーの ちしきを はかる ばしょ!!\nバトルファクトリーに ようこそ!\pバトルトレード ダブルの\nごあんないは こちらです!"
	.byte EOS
	.if (. - gText_Rom_23165C) > 0x42
	.error "gText_Rom_23165C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23165C) < 0x42
	.space 0x42 - (. - gText_Rom_23165C)
	.endif
