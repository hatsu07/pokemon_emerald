	@ data/maps/MagmaHideout_2F_1R/scripts.inc:41 MagmaHideout_2F_1R_Text_Grunt3Intro (+1 aliases)
	.globl gText_Rom_21C375
gText_Rom_21C375: @ 0x0821C375
	.string "こらこら!\pオレの めのまえを だまって\nすどおり させる わけには いかねーぞ!"
	.byte EOS
	.if (. - gText_Rom_21C375) > 0x2a
	.error "gText_Rom_21C375 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21C375) < 0x2a
	.space 0x2a - (. - gText_Rom_21C375)
	.endif
