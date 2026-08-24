	@ src/data/text/ribbon_descriptions.h:18 gRibbonDescriptionPart1_Effort
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gRibbonDescriptionPart1_Effort
gRibbonDescriptionPart1_Effort: @ 0x085F5F3E
	.string "たくさん どりょく している{EOS}"
	.if (. - gRibbonDescriptionPart1_Effort) != 0xf
	.error "gRibbonDescriptionPart1_Effort must retain its original byte length"
	.endif
