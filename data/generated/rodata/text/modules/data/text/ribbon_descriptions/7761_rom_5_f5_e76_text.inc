	@ src/data/text/ribbon_descriptions.h:3 gRibbonDescriptionPart1_CoolContest (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F5E76
gText_Rom_5F5E76: @ 0x085F5E76
	.string "かっこよさコンテスト{EOS}"
	.if (. - gText_Rom_5F5E76) != 0xb
	.error "gText_Rom_5F5E76 must retain its original byte length"
	.endif
