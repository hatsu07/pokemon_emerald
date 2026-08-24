	@ src/data/text/ribbon_descriptions.h:10 gRibbonDescriptionPart2_HyperRank
	.globl gRibbonDescriptionPart2_HyperRank
gRibbonDescriptionPart2_HyperRank: @ 0x085F5EC9
	.string "ハイパーランク ゆうしょう!{EOS}"
	.if (. - gRibbonDescriptionPart2_HyperRank) > 0xf
	.error "gRibbonDescriptionPart2_HyperRank may not grow beyond its original slot"
	.endif
	.if (. - gRibbonDescriptionPart2_HyperRank) < 0xf
	.space 0xf - (. - gRibbonDescriptionPart2_HyperRank)
	.endif
