	@ data/maps/MagmaHideout_2F_2R/scripts.inc:56 MagmaHideout_2F_2R_Text_Grunt7Defeat (+1 aliases)
	.globl gText_Rom_21C5AD
gText_Rom_21C5AD: @ 0x0821C5AD
	.string "うーむ\nかざんのように あついな きみは!"
	.byte EOS
	.if (. - gText_Rom_21C5AD) > 0x16
	.error "gText_Rom_21C5AD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21C5AD) < 0x16
	.space 0x16 - (. - gText_Rom_21C5AD)
	.endif
