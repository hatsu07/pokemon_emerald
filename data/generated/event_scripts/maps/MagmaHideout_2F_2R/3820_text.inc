	@ data/maps/MagmaHideout_2F_2R/scripts.inc:37 MagmaHideout_2F_2R_Text_Grunt6Intro (+1 aliases)
	.globl gText_Rom_21C507
gText_Rom_21C507: @ 0x0821C507
	.string "オレって あつがり なんだよ\nもしかして アクアだんに はいったほうが\lよかったのかな?"
	.byte EOS
	.if (. - gText_Rom_21C507) > 0x2d
	.error "gText_Rom_21C507 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21C507) < 0x2d
	.space 0x2d - (. - gText_Rom_21C507)
	.endif
