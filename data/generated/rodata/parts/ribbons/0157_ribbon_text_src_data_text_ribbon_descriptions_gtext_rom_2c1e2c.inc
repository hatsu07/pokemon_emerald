	@ src/data/text/ribbon_descriptions.h:7 gRibbonDescriptionPart1_ToughContest (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2C1E2C
gText_Rom_2C1E2C: @ 0x082C1E2C
	.string "たくましさコンテスト$"
	.if (. - gText_Rom_2C1E2C) != 0xb
	.error "gText_Rom_2C1E2C must retain its original byte length"
	.endif
