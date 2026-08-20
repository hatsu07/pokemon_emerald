	@ src/data/text/gift_ribbon_descriptions.h:11 gGiftRibbonDescriptionPart1_2005NationalTourney
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F60C1
gText_Rom_5F60C1: @ 0x085F60C1
	.string "2005ねん ぜんこく たいかい{EOS}"
	.if (. - gText_Rom_5F60C1) != 0x11
	.error "gText_Rom_5F60C1 must retain its original byte length"
	.endif
