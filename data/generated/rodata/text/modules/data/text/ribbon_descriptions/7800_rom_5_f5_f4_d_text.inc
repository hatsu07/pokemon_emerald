	@ src/data/text/ribbon_descriptions.h:19 gRibbonDescriptionPart2_Effort
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F5F4D
gText_Rom_5F5F4D: @ 0x085F5F4D
	.string "ポケモンに おくられる リボン{EOS}"
	.if (. - gText_Rom_5F5F4D) != 0x10
	.error "gText_Rom_5F5F4D must retain its original byte length"
	.endif
