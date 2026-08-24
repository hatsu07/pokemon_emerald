	@ src/data/text/gift_ribbon_descriptions.h:16 gGiftRibbonDescriptionPart1_AdvanceCup
	.globl gGiftRibbonDescriptionPart1_AdvanceCup
gGiftRibbonDescriptionPart1_AdvanceCup: @ 0x085F6102
	.string "アドバンス カップ{EOS}"
	.if (. - gGiftRibbonDescriptionPart1_AdvanceCup) > 0xa
	.error "gGiftRibbonDescriptionPart1_AdvanceCup may not grow beyond its original slot"
	.endif
	.if (. - gGiftRibbonDescriptionPart1_AdvanceCup) < 0xa
	.space 0xa - (. - gGiftRibbonDescriptionPart1_AdvanceCup)
	.endif
