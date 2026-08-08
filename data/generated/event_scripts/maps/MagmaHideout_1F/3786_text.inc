	@ data/maps/MagmaHideout_1F/scripts.inc:44 MagmaHideout_1F_Text_Grunt2Defeat (+1 aliases)
	.globl gText_Rom_21C22E
gText_Rom_21C22E: @ 0x0821C22E
	.string "むぐぅ…… たおされちまった!"
	.byte EOS
	.if (. - gText_Rom_21C22E) > 0x10
	.error "gText_Rom_21C22E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21C22E) < 0x10
	.space 0x10 - (. - gText_Rom_21C22E)
	.endif
