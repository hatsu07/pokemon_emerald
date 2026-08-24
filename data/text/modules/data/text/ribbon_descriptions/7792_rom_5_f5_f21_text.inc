	@ src/data/text/ribbon_descriptions.h:16 gRibbonDescriptionPart1_Artist
	.globl gRibbonDescriptionPart1_Artist
gRibbonDescriptionPart1_Artist: @ 0x085F5F21
	.string "ごうかな にがおえの モデルに{EOS}"
	.if (. - gRibbonDescriptionPart1_Artist) > 0x10
	.error "gRibbonDescriptionPart1_Artist may not grow beyond its original slot"
	.endif
	.if (. - gRibbonDescriptionPart1_Artist) < 0x10
	.space 0x10 - (. - gRibbonDescriptionPart1_Artist)
	.endif
