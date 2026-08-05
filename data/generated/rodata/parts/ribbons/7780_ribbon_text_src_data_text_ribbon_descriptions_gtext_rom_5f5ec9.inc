	@ src/data/text/ribbon_descriptions.h:10 gRibbonDescriptionPart2_HyperRank
	.globl gText_Rom_5F5EC9
gText_Rom_5F5EC9: @ 0x085F5EC9
	.string "ハイパーランク ゆうしょう!$"
	.if (. - gText_Rom_5F5EC9) > 0xf
	.error "gText_Rom_5F5EC9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F5EC9) < 0xf
	.space 0xf - (. - gText_Rom_5F5EC9)
	.endif
