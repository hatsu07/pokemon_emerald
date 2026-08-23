	@ src/data/text/ribbon_descriptions.h:5 gRibbonDescriptionPart1_CuteContest (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl sScriptMenuText_CutenessContest
sScriptMenuText_CutenessContest: @ 0x085CAA60
	.string "かわいさコンテスト{EOS}"
	.if (. - sScriptMenuText_CutenessContest) != 0xa
	.error "sScriptMenuText_CutenessContest must retain its original byte length"
	.endif
