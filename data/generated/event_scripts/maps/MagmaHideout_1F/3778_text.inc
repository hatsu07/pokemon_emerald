	@ data/maps/MagmaHideout_1F/scripts.inc:19 MagmaHideout_1F_Text_Grunt1Intro (+1 aliases)
	.globl gText_Rom_21C12D
gText_Rom_21C12D: @ 0x0821C12D
	.string "マグマだんは ごうれいが かかったとき\nはやく せいれつした じゅんばんで\lじゅうような ばしょの\lけいびを まかせて もらえるんだぜ!\pオレが こんな すみっこに いるのは\nちこく ばっかり してるからさ!"
	.byte EOS
	.if (. - gText_Rom_21C12D) > 0x69
	.error "gText_Rom_21C12D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21C12D) < 0x69
	.space 0x69 - (. - gText_Rom_21C12D)
	.endif
