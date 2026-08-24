	@ src/data/text/gift_ribbon_descriptions.h:7 gGiftRibbonDescriptionPart1_2004RegionalTourney
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gGiftRibbonDescriptionPart1_2004RegionalTourney
gGiftRibbonDescriptionPart1_2004RegionalTourney: @ 0x085F6081
	.string "2004ねん ちほう たいかい{EOS}"
	.if (. - gGiftRibbonDescriptionPart1_2004RegionalTourney) != 0x10
	.error "gGiftRibbonDescriptionPart1_2004RegionalTourney must retain its original byte length"
	.endif
