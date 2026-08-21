	@ src/data/text/ribbon_descriptions.h:4 gRibbonDescriptionPart1_BeautyContest (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CAA55
gText_Rom_5CAA55: @ 0x085CAA55
	.string "うつくしさコンテスト{EOS}"
	.if (. - gText_Rom_5CAA55) != 0xb
	.error "gText_Rom_5CAA55 must retain its original byte length"
	.endif
