	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:325 BattleFrontier_BattleFactoryLobby_Text_WelcomeForSingleBattle
	.globl gText_Rom_2312C1
gText_Rom_2312C1: @ 0x082312C1
	.string "トレーナーの ちしきを はかる ばしょ!!\nバトルファクトリーに ようこそ!\pバトルトレード シングルへの\nごあんないは こちらです!"
	.byte EOS
	.if (. - gText_Rom_2312C1) > 0x44
	.error "gText_Rom_2312C1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2312C1) < 0x44
	.space 0x44 - (. - gText_Rom_2312C1)
	.endif
