	@ data/maps/MagmaHideout_2F_1R/scripts.inc:46 MagmaHideout_2F_1R_Text_Grunt3Defeat (+1 aliases)
	.globl gText_Rom_21C39F
gText_Rom_21C39F: @ 0x0821C39F
	.string "うはっ! まけましたっ!"
	.byte EOS
	.if (. - gText_Rom_21C39F) > 0xd
	.error "gText_Rom_21C39F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21C39F) < 0xd
	.space 0xd - (. - gText_Rom_21C39F)
	.endif
