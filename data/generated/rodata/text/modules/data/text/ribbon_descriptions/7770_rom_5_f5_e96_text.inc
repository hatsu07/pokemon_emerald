	@ src/data/text/ribbon_descriptions.h:6 gRibbonDescriptionPart1_SmartContest (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F5E96
gText_Rom_5F5E96: @ 0x085F5E96
	.string "かしこさコンテスト$"
	.if (. - gText_Rom_5F5E96) != 0xa
	.error "gText_Rom_5F5E96 must retain its original byte length"
	.endif
