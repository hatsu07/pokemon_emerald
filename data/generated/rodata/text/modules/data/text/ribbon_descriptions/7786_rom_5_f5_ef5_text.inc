	@ src/data/text/ribbon_descriptions.h:13 gRibbonDescriptionPart2_Winning (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F5EF5
gText_Rom_5F5EF5: @ 0x085F5EF5
	.string "かちぬいた きねんのリボン{EOS}"
	.if (. - gText_Rom_5F5EF5) != 0xe
	.error "gText_Rom_5F5EF5 must retain its original byte length"
	.endif
