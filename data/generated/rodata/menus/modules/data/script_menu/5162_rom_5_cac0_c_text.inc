	@ src/data/script_menu.h:336 gText_YellowShard
	.globl gText_Rom_5CAC0C
gText_Rom_5CAC0C: @ 0x085CAC0C
	.string "きいろいかけら$"
	.if (. - gText_Rom_5CAC0C) > 0x8
	.error "gText_Rom_5CAC0C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAC0C) < 0x8
	.space 0x8 - (. - gText_Rom_5CAC0C)
	.endif
