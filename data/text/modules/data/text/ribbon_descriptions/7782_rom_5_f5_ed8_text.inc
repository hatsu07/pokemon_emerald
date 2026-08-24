	@ src/data/text/ribbon_descriptions.h:11 gRibbonDescriptionPart2_MasterRank
	.globl gRibbonDescriptionPart2_MasterRank
gRibbonDescriptionPart2_MasterRank: @ 0x085F5ED8
	.string "マスターランク ゆうしょう!{EOS}"
	.if (. - gRibbonDescriptionPart2_MasterRank) > 0xf
	.error "gRibbonDescriptionPart2_MasterRank may not grow beyond its original slot"
	.endif
	.if (. - gRibbonDescriptionPart2_MasterRank) < 0xf
	.space 0xf - (. - gRibbonDescriptionPart2_MasterRank)
	.endif
