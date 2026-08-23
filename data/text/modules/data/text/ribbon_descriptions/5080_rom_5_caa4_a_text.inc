	@ src/data/text/ribbon_descriptions.h:3 gRibbonDescriptionPart1_CoolContest (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl sScriptMenuText_CoolnessContest
sScriptMenuText_CoolnessContest: @ 0x085CAA4A
	.string "かっこよさコンテスト{EOS}"
	.if (. - sScriptMenuText_CoolnessContest) != 0xb
	.error "sScriptMenuText_CoolnessContest must retain its original byte length"
	.endif
