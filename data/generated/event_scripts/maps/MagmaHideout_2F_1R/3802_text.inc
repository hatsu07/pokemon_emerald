	@ data/maps/MagmaHideout_2F_1R/scripts.inc:54 MagmaHideout_2F_1R_Text_Grunt4Intro (+1 aliases)
	.globl gText_Rom_21C3CF
gText_Rom_21C3CF: @ 0x0821C3CF
	.string "やや! あやしい やつめ!"
	.byte EOS
	.if (. - gText_Rom_21C3CF) > 0xe
	.error "gText_Rom_21C3CF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21C3CF) < 0xe
	.space 0xe - (. - gText_Rom_21C3CF)
	.endif
