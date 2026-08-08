	@ src/data/text/ribbon_descriptions.h:8 gRibbonDescriptionPart2_NormalRank
	.globl gText_Rom_5F5EAB
gText_Rom_5F5EAB: @ 0x085F5EAB
	.string "ノーマルランク ゆうしょう!$"
	.if (. - gText_Rom_5F5EAB) > 0xf
	.error "gText_Rom_5F5EAB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F5EAB) < 0xf
	.space 0xf - (. - gText_Rom_5F5EAB)
	.endif
