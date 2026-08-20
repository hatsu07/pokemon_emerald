	@ src/data/text/gift_ribbon_descriptions.h:23 gGiftRibbonDescriptionPart1_ClearingAllChallenges
	.globl gText_Rom_5F6150
gText_Rom_5F6150: @ 0x085F6150
	.string "すべての こんなんを{EOS}"
	.if (. - gText_Rom_5F6150) > 0xb
	.error "gText_Rom_5F6150 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F6150) < 0xb
	.space 0xb - (. - gText_Rom_5F6150)
	.endif
