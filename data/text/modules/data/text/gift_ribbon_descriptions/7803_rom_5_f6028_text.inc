	@ src/data/text/gift_ribbon_descriptions.h:1 gGiftRibbonDescriptionPart1_2003RegionalTourney
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gGiftRibbonDescriptionPart1_2003RegionalTourney
gGiftRibbonDescriptionPart1_2003RegionalTourney: @ 0x085F6028
	.string "2003ねん ちほう たいかい{EOS}"
	.if (. - gGiftRibbonDescriptionPart1_2003RegionalTourney) != 0x10
	.error "gGiftRibbonDescriptionPart1_2003RegionalTourney must retain its original byte length"
	.endif
