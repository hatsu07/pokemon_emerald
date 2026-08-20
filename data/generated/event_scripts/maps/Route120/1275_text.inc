	@ data/maps/Route120/scripts.inc:383 Route120_Text_StevenShowMeYourPower
	.globl gText_Rom_1EDEF4
gText_Rom_1EDEF4: @ 0x081EDEF4
	.string "ダイゴ『{PLAYER}{KUN}\nきみの トレーナー としての\lじつりょく みせてもらうよ!{EOS}"
	.if (. - gText_Rom_1EDEF4) > 0x27
	.error "gText_Rom_1EDEF4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EDEF4) < 0x27
	.space 0x27 - (. - gText_Rom_1EDEF4)
	.endif
