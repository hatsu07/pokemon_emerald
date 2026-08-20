	@ src/data/text/ribbon_descriptions.h:3 gRibbonDescriptionPart1_CoolContest (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CAA4A
gText_Rom_5CAA4A: @ 0x085CAA4A
	.string "かっこよさコンテスト{EOS}"
	.if (. - gText_Rom_5CAA4A) != 0xb
	.error "gText_Rom_5CAA4A must retain its original byte length"
	.endif
