	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:720 BattleFrontier_BattlePyramidLobby_Text_ExplainTrainerRules
	.globl gText_Rom_22D398
gText_Rom_22D398: @ 0x0822D398
	.string "ピラミッドの なかには\nトレーナーが まちかまえて います\p1つの だんには さいこうで\n8にんの トレーナーが います\pまた トレーナーに かつと\nちょっと ぼうけんに やくだつ\lヒントが もらえます$"
	.if (. - gText_Rom_22D398) > 0x66
	.error "gText_Rom_22D398 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22D398) < 0x66
	.space 0x66 - (. - gText_Rom_22D398)
	.endif
