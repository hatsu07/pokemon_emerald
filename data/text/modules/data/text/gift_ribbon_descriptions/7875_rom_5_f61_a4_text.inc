	@ src/data/text/gift_ribbon_descriptions.h:30 gGiftRibbonDescriptionPart1_LegendMaking
	.globl gGiftRibbonDescriptionPart1_LegendMaking
gGiftRibbonDescriptionPart1_LegendMaking: @ 0x085F61A4
	.string "でんせつを つくった{EOS}"
	.if (. - gGiftRibbonDescriptionPart1_LegendMaking) > 0xb
	.error "gGiftRibbonDescriptionPart1_LegendMaking may not grow beyond its original slot"
	.endif
	.if (. - gGiftRibbonDescriptionPart1_LegendMaking) < 0xb
	.space 0xb - (. - gGiftRibbonDescriptionPart1_LegendMaking)
	.endif
