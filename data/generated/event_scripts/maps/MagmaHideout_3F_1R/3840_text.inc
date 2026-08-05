	@ data/maps/MagmaHideout_3F_1R/scripts.inc:19 MagmaHideout_3F_1R_Text_Grunt9Defeat (+1 aliases)
	.globl gText_Rom_21C6C6
gText_Rom_21C6C6: @ 0x0821C6C6
	.string "あつくて ヘロヘロ……"
	.byte EOS
	.if (. - gText_Rom_21C6C6) > 0xc
	.error "gText_Rom_21C6C6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21C6C6) < 0xc
	.space 0xc - (. - gText_Rom_21C6C6)
	.endif
