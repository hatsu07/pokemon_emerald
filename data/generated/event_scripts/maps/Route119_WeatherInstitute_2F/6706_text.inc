	@ data/maps/Route119_WeatherInstitute_2F/scripts.inc:219 Route119_WeatherInstitute_2F_Text_Grunt3Intro (+1 aliases)
	.globl gText_Rom_2417ED
gText_Rom_2417ED: @ 0x082417ED
	.string "おれたち アクアだん!\nめずらしい ものが ある ところなら\lどこにでも あらわれる!{EOS}"
	.if (. - gText_Rom_2417ED) > 0x2c
	.error "gText_Rom_2417ED may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2417ED) < 0x2c
	.space 0x2c - (. - gText_Rom_2417ED)
	.endif
