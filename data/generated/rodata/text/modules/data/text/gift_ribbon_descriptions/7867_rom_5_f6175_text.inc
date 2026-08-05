	@ src/data/text/gift_ribbon_descriptions.h:26 gGiftRibbonDescriptionPart1_DarknessTower
	.globl gText_Rom_5F6175
gText_Rom_5F6175: @ 0x085F6175
	.string "くらやみのとう クリア$"
	.if (. - gText_Rom_5F6175) > 0xc
	.error "gText_Rom_5F6175 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F6175) < 0xc
	.space 0xc - (. - gText_Rom_5F6175)
	.endif
