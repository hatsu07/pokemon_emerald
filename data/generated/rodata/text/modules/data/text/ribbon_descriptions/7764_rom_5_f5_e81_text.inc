	@ src/data/text/ribbon_descriptions.h:4 gRibbonDescriptionPart1_BeautyContest (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F5E81
gText_Rom_5F5E81: @ 0x085F5E81
	.string "うつくしさコンテスト$"
	.if (. - gText_Rom_5F5E81) != 0xb
	.error "gText_Rom_5F5E81 must retain its original byte length"
	.endif
