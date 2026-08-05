	@ src/data/script_menu.h:338 gText_GreenShard
	.globl gText_Rom_5CAC1B
gText_Rom_5CAC1B: @ 0x085CAC1B
	.string "みどりのかけら$"
	.if (. - gText_Rom_5CAC1B) > 0x8
	.error "gText_Rom_5CAC1B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAC1B) < 0x8
	.space 0x8 - (. - gText_Rom_5CAC1B)
	.endif
