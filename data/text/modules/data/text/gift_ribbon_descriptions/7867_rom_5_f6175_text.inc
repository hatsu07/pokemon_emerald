	@ src/data/text/gift_ribbon_descriptions.h:26 gGiftRibbonDescriptionPart1_DarknessTower
	.globl gGiftRibbonDescriptionPart1_DarknessTower
gGiftRibbonDescriptionPart1_DarknessTower: @ 0x085F6175
	.string "くらやみのとう クリア{EOS}"
	.if (. - gGiftRibbonDescriptionPart1_DarknessTower) > 0xc
	.error "gGiftRibbonDescriptionPart1_DarknessTower may not grow beyond its original slot"
	.endif
	.if (. - gGiftRibbonDescriptionPart1_DarknessTower) < 0xc
	.space 0xc - (. - gGiftRibbonDescriptionPart1_DarknessTower)
	.endif
