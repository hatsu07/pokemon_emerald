	@ src/data/text/gift_ribbon_descriptions.h:4 gGiftRibbonDescriptionPart1_2003GlobalCup
	.globl gGiftRibbonDescriptionPart1_2003GlobalCup
gGiftRibbonDescriptionPart1_2003GlobalCup: @ 0x085F6056
	.string "2003ねん ワールドカップ{EOS}"
	.if (. - gGiftRibbonDescriptionPart1_2003GlobalCup) > 0xf
	.error "gGiftRibbonDescriptionPart1_2003GlobalCup may not grow beyond its original slot"
	.endif
	.if (. - gGiftRibbonDescriptionPart1_2003GlobalCup) < 0xf
	.space 0xf - (. - gGiftRibbonDescriptionPart1_2003GlobalCup)
	.endif
