	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:1054 BattleFrontier_BattleTowerLobby_Text_WelcomSingleBattle
	.globl gText_Rom_220FA0
gText_Rom_220FA0: @ 0x08220FA0
	.string "トレーナーの さいのうを はかる ばしょ!\nバトルタワーへ ようこそ!\pこちらでは シングル バトルルームの\nごあんないを しております!"
	.byte EOS
	.if (. - gText_Rom_220FA0) > 0x46
	.error "gText_Rom_220FA0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_220FA0) < 0x46
	.space 0x46 - (. - gText_Rom_220FA0)
	.endif
