	@ data/maps/MagmaHideout_2F_1R/scripts.inc:66 MagmaHideout_2F_1R_Text_Grunt5Intro (+1 aliases)
	.globl gText_Rom_21C40E
gText_Rom_21C40E: @ 0x0821C40E
	.string "むむ! あやしい やつめ!"
	.byte EOS
	.if (. - gText_Rom_21C40E) > 0xe
	.error "gText_Rom_21C40E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21C40E) < 0xe
	.space 0xe - (. - gText_Rom_21C40E)
	.endif
