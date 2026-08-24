	@ src/data/text/gift_ribbon_descriptions.h:3 gGiftRibbonDescriptionPart1_2003NationalTourney
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gGiftRibbonDescriptionPart1_2003NationalTourney
gGiftRibbonDescriptionPart1_2003NationalTourney: @ 0x085F6045
	.string "2003ねん ぜんこく たいかい{EOS}"
	.if (. - gGiftRibbonDescriptionPart1_2003NationalTourney) != 0x11
	.error "gGiftRibbonDescriptionPart1_2003NationalTourney must retain its original byte length"
	.endif
