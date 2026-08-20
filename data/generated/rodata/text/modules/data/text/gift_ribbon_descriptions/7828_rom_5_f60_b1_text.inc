	@ src/data/text/gift_ribbon_descriptions.h:10 gGiftRibbonDescriptionPart1_2005RegionalTourney
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F60B1
gText_Rom_5F60B1: @ 0x085F60B1
	.string "2005ねん ちほう たいかい{EOS}"
	.if (. - gText_Rom_5F60B1) != 0x10
	.error "gText_Rom_5F60B1 must retain its original byte length"
	.endif
