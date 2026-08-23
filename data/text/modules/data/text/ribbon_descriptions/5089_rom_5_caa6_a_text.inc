	@ src/data/text/ribbon_descriptions.h:6 gRibbonDescriptionPart1_SmartContest (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl sScriptMenuText_SmartnessContest
sScriptMenuText_SmartnessContest: @ 0x085CAA6A
	.string "かしこさコンテスト{EOS}"
	.if (. - sScriptMenuText_SmartnessContest) != 0xa
	.error "sScriptMenuText_SmartnessContest must retain its original byte length"
	.endif
