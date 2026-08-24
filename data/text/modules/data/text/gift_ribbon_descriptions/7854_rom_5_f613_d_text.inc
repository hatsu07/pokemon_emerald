	@ src/data/text/gift_ribbon_descriptions.h:21 gGiftRibbonDescriptionPart1_DifficultyClearing
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gGiftRibbonDescriptionPart1_DifficultyClearing
gGiftRibbonDescriptionPart1_DifficultyClearing: @ 0x085F613D
	.string "こんなんに うちかった{EOS}"
	.if (. - gGiftRibbonDescriptionPart1_DifficultyClearing) != 0xc
	.error "gGiftRibbonDescriptionPart1_DifficultyClearing must retain its original byte length"
	.endif
