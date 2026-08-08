	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:529 BattleFrontier_BattlePyramidLobby_Text_WelcomeToBattlePyramid
	.globl gText_Rom_22C4F8
gText_Rom_22C4F8: @ 0x0822C4F8
	.string "トレーナーの ゆうきを ためす ばしょ!\nバトルピラミッドへ ようこそ!\pこちらでは バトルアドベンチャーの\nごあんないを しておりますぞ!$"
	.if (. - gText_Rom_22C4F8) > 0x47
	.error "gText_Rom_22C4F8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22C4F8) < 0x47
	.space 0x47 - (. - gText_Rom_22C4F8)
	.endif
