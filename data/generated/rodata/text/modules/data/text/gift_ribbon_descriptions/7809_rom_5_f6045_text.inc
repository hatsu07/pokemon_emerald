	@ src/data/text/gift_ribbon_descriptions.h:3 gGiftRibbonDescriptionPart1_2003NationalTourney
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F6045
gText_Rom_5F6045: @ 0x085F6045
	.string "2003ねん ぜんこく たいかい{EOS}"
	.if (. - gText_Rom_5F6045) != 0x11
	.error "gText_Rom_5F6045 must retain its original byte length"
	.endif
