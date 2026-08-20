	@ src/data/text/ribbon_descriptions.h:6 gRibbonDescriptionPart1_SmartContest (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CAA6A
gText_Rom_5CAA6A: @ 0x085CAA6A
	.string "かしこさコンテスト{EOS}"
	.if (. - gText_Rom_5CAA6A) != 0xa
	.error "gText_Rom_5CAA6A must retain its original byte length"
	.endif
