	@ data/maps/MtChimney/scripts.inc:628 MtChimney_Text_Grunt1Intro (+1 aliases)
	.globl gText_Rom_2153BE
gText_Rom_2153BE: @ 0x082153BE
	.string "りくちが ふえて くれたら\nおおきな マイホーム だって もてるわ!\pようがんの うえに ひっこし するのよ!{EOS}"
	.if (. - gText_Rom_2153BE) > 0x38
	.error "gText_Rom_2153BE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2153BE) < 0x38
	.space 0x38 - (. - gText_Rom_2153BE)
	.endif
