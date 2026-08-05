	@ data/maps/MagmaHideout_2F_1R/scripts.inc:58 MagmaHideout_2F_1R_Text_Grunt4Defeat (+1 aliases)
	.globl gText_Rom_21C3DD
gText_Rom_21C3DD: @ 0x0821C3DD
	.string "ぬおお……"
	.byte EOS
	.if (. - gText_Rom_21C3DD) > 0x6
	.error "gText_Rom_21C3DD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21C3DD) < 0x6
	.space 0x6 - (. - gText_Rom_21C3DD)
	.endif
