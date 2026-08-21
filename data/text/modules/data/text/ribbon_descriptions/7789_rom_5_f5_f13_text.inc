	@ src/data/text/ribbon_descriptions.h:13 gRibbonDescriptionPart2_Winning (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F5F13
gText_Rom_5F5F13: @ 0x085F5F13
	.string "かちぬいた きねんのリボン{EOS}"
	.if (. - gText_Rom_5F5F13) != 0xe
	.error "gText_Rom_5F5F13 must retain its original byte length"
	.endif
