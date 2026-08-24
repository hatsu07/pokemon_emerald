	@ src/data/text/gift_ribbon_descriptions.h:23 gGiftRibbonDescriptionPart1_ClearingAllChallenges
	.globl gGiftRibbonDescriptionPart1_ClearingAllChallenges
gGiftRibbonDescriptionPart1_ClearingAllChallenges: @ 0x085F6150
	.string "すべての こんなんを{EOS}"
	.if (. - gGiftRibbonDescriptionPart1_ClearingAllChallenges) > 0xb
	.error "gGiftRibbonDescriptionPart1_ClearingAllChallenges may not grow beyond its original slot"
	.endif
	.if (. - gGiftRibbonDescriptionPart1_ClearingAllChallenges) < 0xb
	.space 0xb - (. - gGiftRibbonDescriptionPart1_ClearingAllChallenges)
	.endif
