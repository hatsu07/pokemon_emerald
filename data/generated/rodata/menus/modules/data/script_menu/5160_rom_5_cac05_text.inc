	@ src/data/script_menu.h:335 gText_RedShard
	.globl gText_Rom_5CAC05
gText_Rom_5CAC05: @ 0x085CAC05
	.string "あかいかけら$"
	.if (. - gText_Rom_5CAC05) > 0x7
	.error "gText_Rom_5CAC05 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAC05) < 0x7
	.space 0x7 - (. - gText_Rom_5CAC05)
	.endif
