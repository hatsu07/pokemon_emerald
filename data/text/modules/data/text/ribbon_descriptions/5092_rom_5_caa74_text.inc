	@ src/data/text/ribbon_descriptions.h:7 gRibbonDescriptionPart1_ToughContest (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CAA74
gText_Rom_5CAA74: @ 0x085CAA74
	.string "たくましさコンテスト{EOS}"
	.if (. - gText_Rom_5CAA74) != 0xb
	.error "gText_Rom_5CAA74 must retain its original byte length"
	.endif
