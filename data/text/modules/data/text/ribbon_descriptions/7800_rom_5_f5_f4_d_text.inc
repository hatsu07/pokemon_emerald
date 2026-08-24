	@ src/data/text/ribbon_descriptions.h:19 gRibbonDescriptionPart2_Effort
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gRibbonDescriptionPart2_Effort
gRibbonDescriptionPart2_Effort: @ 0x085F5F4D
	.string "ポケモンに おくられる リボン{EOS}"
	.if (. - gRibbonDescriptionPart2_Effort) != 0x10
	.error "gRibbonDescriptionPart2_Effort must retain its original byte length"
	.endif
