	@ src/data/script_menu.h:337 gText_BlueShard
	.globl gText_Rom_5CAC14
gText_Rom_5CAC14: @ 0x085CAC14
	.string "あおいかけら$"
	.if (. - gText_Rom_5CAC14) > 0x7
	.error "gText_Rom_5CAC14 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAC14) < 0x7
	.space 0x7 - (. - gText_Rom_5CAC14)
	.endif
