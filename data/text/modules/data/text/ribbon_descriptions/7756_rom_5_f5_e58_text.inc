	@ src/data/text/ribbon_descriptions.h:1 gRibbonDescriptionPart1_Champion
	.globl gRibbonDescriptionPart1_Champion
gRibbonDescriptionPart1_Champion: @ 0x085F5E58
	.string "チャンピオンを たおして{EOS}"
	.if (. - gRibbonDescriptionPart1_Champion) > 0xd
	.error "gRibbonDescriptionPart1_Champion may not grow beyond its original slot"
	.endif
	.if (. - gRibbonDescriptionPart1_Champion) < 0xd
	.space 0xd - (. - gRibbonDescriptionPart1_Champion)
	.endif
