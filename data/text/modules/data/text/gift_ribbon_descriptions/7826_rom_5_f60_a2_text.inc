	@ src/data/text/gift_ribbon_descriptions.h:9 gGiftRibbonDescriptionPart1_2004GlobalCup
	.globl gGiftRibbonDescriptionPart1_2004GlobalCup
gGiftRibbonDescriptionPart1_2004GlobalCup: @ 0x085F60A2
	.string "2004ねん ワールドカップ{EOS}"
	.if (. - gGiftRibbonDescriptionPart1_2004GlobalCup) > 0xf
	.error "gGiftRibbonDescriptionPart1_2004GlobalCup may not grow beyond its original slot"
	.endif
	.if (. - gGiftRibbonDescriptionPart1_2004GlobalCup) < 0xf
	.space 0xf - (. - gGiftRibbonDescriptionPart1_2004GlobalCup)
	.endif
