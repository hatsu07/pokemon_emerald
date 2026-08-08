	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:1078 BattleFrontier_BattleTowerLobby_Text_WelcomeMultiBattle
	.globl gText_Rom_2212E2
gText_Rom_2212E2: @ 0x082212E2
	.string "トレーナーの さいのうを はかる ばしょ!\nバトルタワーへ ようこそ!\pこちらでは マルチ バトルルームの\nごあんないを しております!"
	.byte EOS
	.if (. - gText_Rom_2212E2) > 0x45
	.error "gText_Rom_2212E2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2212E2) < 0x45
	.space 0x45 - (. - gText_Rom_2212E2)
	.endif
