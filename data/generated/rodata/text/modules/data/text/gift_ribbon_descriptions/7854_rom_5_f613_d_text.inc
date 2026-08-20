	@ src/data/text/gift_ribbon_descriptions.h:21 gGiftRibbonDescriptionPart1_DifficultyClearing
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F613D
gText_Rom_5F613D: @ 0x085F613D
	.string "こんなんに うちかった{EOS}"
	.if (. - gText_Rom_5F613D) != 0xc
	.error "gText_Rom_5F613D must retain its original byte length"
	.endif
