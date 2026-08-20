	@ data/maps/MtPyre_2F/scripts.inc:113 MtPyre_2F_Text_LeahDefeat (+1 aliases)
	.globl gText_Rom_216562
gText_Rom_216562: @ 0x08216562
	.string "むん…… てごわいのね{EOS}"
	.if (. - gText_Rom_216562) > 0xc
	.error "gText_Rom_216562 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_216562) < 0xc
	.space 0xc - (. - gText_Rom_216562)
	.endif
