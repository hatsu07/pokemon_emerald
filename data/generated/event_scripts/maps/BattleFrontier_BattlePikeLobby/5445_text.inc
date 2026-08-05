	@ data/maps/BattleFrontier_BattlePikeLobby/scripts.inc:274 BattleFrontier_BattlePikeLobby_Text_WelcomeToBattlePike
	.globl gText_Rom_233529
gText_Rom_233529: @ 0x08233529
	.string "トレーナーの うんを ためす ばしょ……\nバトルチューブへ ようこそ……\pバトルゲームへの ごあんないは\nこちらで ございます……"
	.byte EOS
	.if (. - gText_Rom_233529) > 0x42
	.error "gText_Rom_233529 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_233529) < 0x42
	.space 0x42 - (. - gText_Rom_233529)
	.endif
