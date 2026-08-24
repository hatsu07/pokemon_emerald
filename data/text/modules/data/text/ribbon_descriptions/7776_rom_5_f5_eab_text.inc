	@ src/data/text/ribbon_descriptions.h:8 gRibbonDescriptionPart2_NormalRank
	.globl gRibbonDescriptionPart2_NormalRank
gRibbonDescriptionPart2_NormalRank: @ 0x085F5EAB
	.string "ノーマルランク ゆうしょう!{EOS}"
	.if (. - gRibbonDescriptionPart2_NormalRank) > 0xf
	.error "gRibbonDescriptionPart2_NormalRank may not grow beyond its original slot"
	.endif
	.if (. - gRibbonDescriptionPart2_NormalRank) < 0xf
	.space 0xf - (. - gRibbonDescriptionPart2_NormalRank)
	.endif
