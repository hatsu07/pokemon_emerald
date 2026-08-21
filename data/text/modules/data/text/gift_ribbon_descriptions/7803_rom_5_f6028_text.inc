	@ src/data/text/gift_ribbon_descriptions.h:1 gGiftRibbonDescriptionPart1_2003RegionalTourney
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F6028
gText_Rom_5F6028: @ 0x085F6028
	.string "2003ねん ちほう たいかい{EOS}"
	.if (. - gText_Rom_5F6028) != 0x10
	.error "gText_Rom_5F6028 must retain its original byte length"
	.endif
