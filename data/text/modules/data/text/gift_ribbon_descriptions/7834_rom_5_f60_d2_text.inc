	@ src/data/text/gift_ribbon_descriptions.h:12 gGiftRibbonDescriptionPart1_2005GlobalCup
	.globl gGiftRibbonDescriptionPart1_2005GlobalCup
gGiftRibbonDescriptionPart1_2005GlobalCup: @ 0x085F60D2
	.string "2005ねん ワールドカップ{EOS}"
	.if (. - gGiftRibbonDescriptionPart1_2005GlobalCup) > 0xf
	.error "gGiftRibbonDescriptionPart1_2005GlobalCup may not grow beyond its original slot"
	.endif
	.if (. - gGiftRibbonDescriptionPart1_2005GlobalCup) < 0xf
	.space 0xf - (. - gGiftRibbonDescriptionPart1_2005GlobalCup)
	.endif
