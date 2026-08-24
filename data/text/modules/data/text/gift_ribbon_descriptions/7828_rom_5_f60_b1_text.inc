	@ src/data/text/gift_ribbon_descriptions.h:10 gGiftRibbonDescriptionPart1_2005RegionalTourney
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gGiftRibbonDescriptionPart1_2005RegionalTourney
gGiftRibbonDescriptionPart1_2005RegionalTourney: @ 0x085F60B1
	.string "2005ねん ちほう たいかい{EOS}"
	.if (. - gGiftRibbonDescriptionPart1_2005RegionalTourney) != 0x10
	.error "gGiftRibbonDescriptionPart1_2005RegionalTourney must retain its original byte length"
	.endif
