	@ src/data/text/ribbon_descriptions.h:12 gRibbonDescriptionPart1_Winning
	.globl gRibbonDescriptionPart1_Winning
gRibbonDescriptionPart1_Winning: @ 0x085F5EE7
	.string "バトルタワー レベル50を{EOS}"
	.if (. - gRibbonDescriptionPart1_Winning) > 0xe
	.error "gRibbonDescriptionPart1_Winning may not grow beyond its original slot"
	.endif
	.if (. - gRibbonDescriptionPart1_Winning) < 0xe
	.space 0xe - (. - gRibbonDescriptionPart1_Winning)
	.endif
