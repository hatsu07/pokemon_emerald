	@ data/maps/AquaHideout_B2F/scripts.inc:110 AquaHideout_B2F_Text_Grunt6Intro (+1 aliases)
	.globl gText_Rom_21822F
gText_Rom_21822F: @ 0x0821822F
	.string "アジト じまんの ワープパネル!\pいま じぶんが どこに いるのか\nわかって ないでしょ!\pそうやって つかれはてた あいてを\nたおすのが さくせん なのよ!{EOS}"
	.if (. - gText_Rom_21822F) > 0x50
	.error "gText_Rom_21822F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21822F) < 0x50
	.space 0x50 - (. - gText_Rom_21822F)
	.endif
