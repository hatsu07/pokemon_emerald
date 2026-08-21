	@ src/data/text/ribbon_descriptions.h:18 gRibbonDescriptionPart1_Effort
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F5F3E
gText_Rom_5F5F3E: @ 0x085F5F3E
	.string "たくさん どりょく している{EOS}"
	.if (. - gText_Rom_5F5F3E) != 0xf
	.error "gText_Rom_5F5F3E must retain its original byte length"
	.endif
