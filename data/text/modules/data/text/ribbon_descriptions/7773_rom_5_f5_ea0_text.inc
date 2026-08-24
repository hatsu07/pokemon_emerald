	@ src/data/text/ribbon_descriptions.h:7 gRibbonDescriptionPart1_ToughContest (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gRibbonDescriptionPart1_ToughContest
gRibbonDescriptionPart1_ToughContest: @ 0x085F5EA0
	.string "たくましさコンテスト{EOS}"
	.if (. - gRibbonDescriptionPart1_ToughContest) != 0xb
	.error "gRibbonDescriptionPart1_ToughContest must retain its original byte length"
	.endif
