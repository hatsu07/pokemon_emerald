	@ src/data/text/ribbon_descriptions.h:4 gRibbonDescriptionPart1_BeautyContest (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl sScriptMenuText_BeautyContest
sScriptMenuText_BeautyContest: @ 0x085CAA55
	.string "うつくしさコンテスト{EOS}"
	.if (. - sScriptMenuText_BeautyContest) != 0xb
	.error "sScriptMenuText_BeautyContest must retain its original byte length"
	.endif
