	@ src/data/text/ribbon_descriptions.h:4 gRibbonDescriptionPart1_BeautyContest (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2C1E08
gText_Rom_2C1E08: @ 0x082C1E08
	.string "うつくしさコンテスト$"
	.if (. - gText_Rom_2C1E08) != 0xb
	.error "gText_Rom_2C1E08 must retain its original byte length"
	.endif
