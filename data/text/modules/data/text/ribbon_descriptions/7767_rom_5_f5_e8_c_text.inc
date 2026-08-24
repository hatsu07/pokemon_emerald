	@ src/data/text/ribbon_descriptions.h:5 gRibbonDescriptionPart1_CuteContest (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gRibbonDescriptionPart1_CuteContest
gRibbonDescriptionPart1_CuteContest: @ 0x085F5E8C
	.string "かわいさコンテスト{EOS}"
	.if (. - gRibbonDescriptionPart1_CuteContest) != 0xa
	.error "gRibbonDescriptionPart1_CuteContest must retain its original byte length"
	.endif
