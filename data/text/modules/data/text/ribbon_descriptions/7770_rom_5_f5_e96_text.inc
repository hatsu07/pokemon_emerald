	@ src/data/text/ribbon_descriptions.h:6 gRibbonDescriptionPart1_SmartContest (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gRibbonDescriptionPart1_SmartContest
gRibbonDescriptionPart1_SmartContest: @ 0x085F5E96
	.string "かしこさコンテスト{EOS}"
	.if (. - gRibbonDescriptionPart1_SmartContest) != 0xa
	.error "gRibbonDescriptionPart1_SmartContest must retain its original byte length"
	.endif
