	@ src/data/text/gift_ribbon_descriptions.h:8 gGiftRibbonDescriptionPart1_2004NationalTourney
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F6091
gText_Rom_5F6091: @ 0x085F6091
	.string "2004ねん ぜんこく たいかい$"
	.if (. - gText_Rom_5F6091) != 0x11
	.error "gText_Rom_5F6091 must retain its original byte length"
	.endif
