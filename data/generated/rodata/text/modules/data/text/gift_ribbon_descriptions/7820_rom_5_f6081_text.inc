	@ src/data/text/gift_ribbon_descriptions.h:7 gGiftRibbonDescriptionPart1_2004RegionalTourney
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F6081
gText_Rom_5F6081: @ 0x085F6081
	.string "2004ねん ちほう たいかい$"
	.if (. - gText_Rom_5F6081) != 0x10
	.error "gText_Rom_5F6081 must retain its original byte length"
	.endif
