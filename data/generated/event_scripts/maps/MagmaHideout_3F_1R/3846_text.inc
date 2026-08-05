	@ data/maps/MagmaHideout_3F_1R/scripts.inc:34 MagmaHideout_3F_1R_Text_Grunt16Defeat (+1 aliases)
	.globl gText_Rom_21C75D
gText_Rom_21C75D: @ 0x0821C75D
	.string "ひえー あなどれない ひと!"
	.byte EOS
	.if (. - gText_Rom_21C75D) > 0xf
	.error "gText_Rom_21C75D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21C75D) < 0xf
	.space 0xf - (. - gText_Rom_21C75D)
	.endif
