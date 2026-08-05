	@ src/data/text/ribbon_descriptions.h:3 gRibbonDescriptionPart1_CoolContest (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2C1DFC
gText_Rom_2C1DFC: @ 0x082C1DFC
	.string "かっこよさコンテスト$"
	.if (. - gText_Rom_2C1DFC) != 0xb
	.error "gText_Rom_2C1DFC must retain its original byte length"
	.endif
