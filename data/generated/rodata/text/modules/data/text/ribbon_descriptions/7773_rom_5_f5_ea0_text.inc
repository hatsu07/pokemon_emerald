	@ src/data/text/ribbon_descriptions.h:7 gRibbonDescriptionPart1_ToughContest (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F5EA0
gText_Rom_5F5EA0: @ 0x085F5EA0
	.string "たくましさコンテスト$"
	.if (. - gText_Rom_5F5EA0) != 0xb
	.error "gText_Rom_5F5EA0 must retain its original byte length"
	.endif
