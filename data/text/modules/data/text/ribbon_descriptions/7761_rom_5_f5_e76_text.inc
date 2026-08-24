	@ src/data/text/ribbon_descriptions.h:3 gRibbonDescriptionPart1_CoolContest (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gRibbonDescriptionPart1_CoolContest
gRibbonDescriptionPart1_CoolContest: @ 0x085F5E76
	.string "かっこよさコンテスト{EOS}"
	.if (. - gRibbonDescriptionPart1_CoolContest) != 0xb
	.error "gRibbonDescriptionPart1_CoolContest must retain its original byte length"
	.endif
