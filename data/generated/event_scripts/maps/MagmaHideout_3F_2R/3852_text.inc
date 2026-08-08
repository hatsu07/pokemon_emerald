	@ data/maps/MagmaHideout_3F_2R/scripts.inc:18 MagmaHideout_3F_2R_Text_Grunt10Defeat (+1 aliases)
	.globl gText_Rom_21C831
gText_Rom_21C831: @ 0x0821C831
	.string "やっぱり なんか まちがってる よなあ?"
	.byte EOS
	.if (. - gText_Rom_21C831) > 0x15
	.error "gText_Rom_21C831 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21C831) < 0x15
	.space 0x15 - (. - gText_Rom_21C831)
	.endif
