	@ src/data/text/ribbon_descriptions.h:5 gRibbonDescriptionPart1_CuteContest (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F5E8C
gText_Rom_5F5E8C: @ 0x085F5E8C
	.string "かわいさコンテスト{EOS}"
	.if (. - gText_Rom_5F5E8C) != 0xa
	.error "gText_Rom_5F5E8C must retain its original byte length"
	.endif
