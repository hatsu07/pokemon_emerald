	@ data/maps/MagmaHideout_2F_1R/scripts.inc:70 MagmaHideout_2F_1R_Text_Grunt5Defeat (+1 aliases)
	.globl gText_Rom_21C41C
gText_Rom_21C41C: @ 0x0821C41C
	.string "うぬぬ……"
	.byte EOS
	.if (. - gText_Rom_21C41C) > 0x6
	.error "gText_Rom_21C41C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21C41C) < 0x6
	.space 0x6 - (. - gText_Rom_21C41C)
	.endif
