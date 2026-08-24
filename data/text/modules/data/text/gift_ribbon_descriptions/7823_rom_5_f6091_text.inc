	@ src/data/text/gift_ribbon_descriptions.h:8 gGiftRibbonDescriptionPart1_2004NationalTourney
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gGiftRibbonDescriptionPart1_2004NationalTourney
gGiftRibbonDescriptionPart1_2004NationalTourney: @ 0x085F6091
	.string "2004ねん ぜんこく たいかい{EOS}"
	.if (. - gGiftRibbonDescriptionPart1_2004NationalTourney) != 0x11
	.error "gGiftRibbonDescriptionPart1_2004NationalTourney must retain its original byte length"
	.endif
