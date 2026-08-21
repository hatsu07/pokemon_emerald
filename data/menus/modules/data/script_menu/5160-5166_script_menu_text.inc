	@ src/data/script_menu.h:335 gText_RedShard
	.globl gText_Rom_5CAC05
gText_Rom_5CAC05: @ 0x085CAC05
	.string "あかいかけら{EOS}"
	.if (. - gText_Rom_5CAC05) > 0x7
	.error "gText_Rom_5CAC05 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAC05) < 0x7
	.space 0x7 - (. - gText_Rom_5CAC05)
	.endif

	@ src/data/script_menu.h:336 gText_YellowShard
	.globl gText_Rom_5CAC0C
gText_Rom_5CAC0C: @ 0x085CAC0C
	.string "きいろいかけら{EOS}"
	.if (. - gText_Rom_5CAC0C) > 0x8
	.error "gText_Rom_5CAC0C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAC0C) < 0x8
	.space 0x8 - (. - gText_Rom_5CAC0C)
	.endif

	@ src/data/script_menu.h:337 gText_BlueShard
	.globl gText_Rom_5CAC14
gText_Rom_5CAC14: @ 0x085CAC14
	.string "あおいかけら{EOS}"
	.if (. - gText_Rom_5CAC14) > 0x7
	.error "gText_Rom_5CAC14 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAC14) < 0x7
	.space 0x7 - (. - gText_Rom_5CAC14)
	.endif

	@ src/data/script_menu.h:338 gText_GreenShard
	.globl gText_Rom_5CAC1B
gText_Rom_5CAC1B: @ 0x085CAC1B
	.string "みどりのかけら{EOS}"
	.if (. - gText_Rom_5CAC1B) > 0x8
	.error "gText_Rom_5CAC1B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAC1B) < 0x8
	.space 0x8 - (. - gText_Rom_5CAC1B)
	.endif
