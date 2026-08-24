	@ src/data/text/ribbon_descriptions.h:9 gRibbonDescriptionPart2_SuperRank
	.globl gRibbonDescriptionPart2_SuperRank
gRibbonDescriptionPart2_SuperRank: @ 0x085F5EBA
	.string "スーパーランク ゆうしょう!{EOS}"
	.if (. - gRibbonDescriptionPart2_SuperRank) > 0xf
	.error "gRibbonDescriptionPart2_SuperRank may not grow beyond its original slot"
	.endif
	.if (. - gRibbonDescriptionPart2_SuperRank) < 0xf
	.space 0xf - (. - gRibbonDescriptionPart2_SuperRank)
	.endif
