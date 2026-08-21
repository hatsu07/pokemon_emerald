	@ src/data/text/ribbon_descriptions.h:5 gRibbonDescriptionPart1_CuteContest (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CAA60
gText_Rom_5CAA60: @ 0x085CAA60
	.string "かわいさコンテスト{EOS}"
	.if (. - gText_Rom_5CAA60) != 0xa
	.error "gText_Rom_5CAA60 must retain its original byte length"
	.endif
