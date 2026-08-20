	@ data/maps/Route101/scripts.inc:262 Route101_Text_PleaseHelp
	.globl gText_Rom_1E669A
gText_Rom_1E669A: @ 0x081E669A
	.string "おーい! そこの きみ!\nたすけて おくれーっ!!\pそこに ある カバンに\nモンスターボールが はいってる!{EOS}"
	.if (. - gText_Rom_1E669A) > 0x37
	.error "gText_Rom_1E669A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E669A) < 0x37
	.space 0x37 - (. - gText_Rom_1E669A)
	.endif
