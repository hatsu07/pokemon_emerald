	@ src/data/text/gift_ribbon_descriptions.h:11 gGiftRibbonDescriptionPart1_2005NationalTourney
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gGiftRibbonDescriptionPart1_2005NationalTourney
gGiftRibbonDescriptionPart1_2005NationalTourney: @ 0x085F60C1
	.string "2005ねん ぜんこく たいかい{EOS}"
	.if (. - gGiftRibbonDescriptionPart1_2005NationalTourney) != 0x11
	.error "gGiftRibbonDescriptionPart1_2005NationalTourney must retain its original byte length"
	.endif
