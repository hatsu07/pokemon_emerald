	@ src/data/text/ribbon_descriptions.h:4 gRibbonDescriptionPart1_BeautyContest (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gRibbonDescriptionPart1_BeautyContest
gRibbonDescriptionPart1_BeautyContest: @ 0x085F5E81
	.string "うつくしさコンテスト{EOS}"
	.if (. - gRibbonDescriptionPart1_BeautyContest) != 0xb
	.error "gRibbonDescriptionPart1_BeautyContest must retain its original byte length"
	.endif
