	@ data/maps/MagmaHideout_2F_2R/scripts.inc:72 MagmaHideout_2F_2R_Text_Grunt8Defeat (+1 aliases)
	.globl gText_Rom_21C635
gText_Rom_21C635: @ 0x0821C635
	.string "うーん なんて やつだ……"
	.byte EOS
	.if (. - gText_Rom_21C635) > 0xe
	.error "gText_Rom_21C635 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21C635) < 0xe
	.space 0xe - (. - gText_Rom_21C635)
	.endif
