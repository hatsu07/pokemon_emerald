	@ src/data/text/ribbon_descriptions.h:7 gRibbonDescriptionPart1_ToughContest (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl sScriptMenuText_ToughnessContest
sScriptMenuText_ToughnessContest: @ 0x085CAA74
	.string "たくましさコンテスト{EOS}"
	.if (. - sScriptMenuText_ToughnessContest) != 0xb
	.error "sScriptMenuText_ToughnessContest must retain its original byte length"
	.endif
