	@ src/data/text/ribbon_descriptions.h:5 gRibbonDescriptionPart1_CuteContest (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2C1E14
gText_Rom_2C1E14: @ 0x082C1E14
	.string "かわいさコンテスト$"
	.if (. - gText_Rom_2C1E14) != 0xa
	.error "gText_Rom_2C1E14 must retain its original byte length"
	.endif
