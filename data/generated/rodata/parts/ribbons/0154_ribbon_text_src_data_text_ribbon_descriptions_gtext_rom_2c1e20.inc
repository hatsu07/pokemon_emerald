	@ src/data/text/ribbon_descriptions.h:6 gRibbonDescriptionPart1_SmartContest (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2C1E20
gText_Rom_2C1E20: @ 0x082C1E20
	.string "かしこさコンテスト$"
	.if (. - gText_Rom_2C1E20) != 0xa
	.error "gText_Rom_2C1E20 must retain its original byte length"
	.endif
