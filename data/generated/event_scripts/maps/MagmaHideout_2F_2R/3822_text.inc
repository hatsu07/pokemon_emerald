	@ data/maps/MagmaHideout_2F_2R/scripts.inc:41 MagmaHideout_2F_2R_Text_Grunt6Defeat (+1 aliases)
	.globl gText_Rom_21C534
gText_Rom_21C534: @ 0x0821C534
	.string "やっぱり オレ\nマグマだんには むいてないかも……"
	.byte EOS
	.if (. - gText_Rom_21C534) > 0x1a
	.error "gText_Rom_21C534 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21C534) < 0x1a
	.space 0x1a - (. - gText_Rom_21C534)
	.endif
