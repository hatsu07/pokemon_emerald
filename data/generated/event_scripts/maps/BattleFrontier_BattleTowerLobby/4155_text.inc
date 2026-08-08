	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:1066 BattleFrontier_BattleTowerLobby_Text_WelcomeDoubleBattle
	.globl gText_Rom_221144
gText_Rom_221144: @ 0x08221144
	.string "トレーナーの さいのうを はかる ばしょ!\nバトルタワーへ ようこそ!\pこちらでは ダブル バトルルームの\nごあんないを しております!"
	.byte EOS
	.if (. - gText_Rom_221144) > 0x45
	.error "gText_Rom_221144 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_221144) < 0x45
	.space 0x45 - (. - gText_Rom_221144)
	.endif
