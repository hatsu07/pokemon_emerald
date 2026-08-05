	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:1090 BattleFrontier_BattleTowerLobby_Text_WelcomeLinkMultiBattle
	.globl gText_Rom_2214DA
gText_Rom_2214DA: @ 0x082214DA
	.string "トレーナーの さいのうを はかる ばしょ!\nバトルタワーへ ようこそ!\pこちらでは\nつうしんマルチ バトルルームの\lごあんないを しております!"
	.byte EOS
	.if (. - gText_Rom_2214DA) > 0x49
	.error "gText_Rom_2214DA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2214DA) < 0x49
	.space 0x49 - (. - gText_Rom_2214DA)
	.endif
