	@ data/maps/MagmaHideout_2F_2R/scripts.inc:28 MagmaHideout_2F_2R_Text_Grunt15Defeat (+1 aliases)
	.globl gText_Rom_21C4C0
gText_Rom_21C4C0: @ 0x0821C4C0
	.string "わたしは まけたけど……"
	.byte EOS
	.if (. - gText_Rom_21C4C0) > 0xd
	.error "gText_Rom_21C4C0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21C4C0) < 0xd
	.space 0xd - (. - gText_Rom_21C4C0)
	.endif
