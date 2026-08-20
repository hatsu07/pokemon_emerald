	@ src/data/text/ribbon_descriptions.h:9 gRibbonDescriptionPart2_SuperRank
	.globl gText_Rom_5F5EBA
gText_Rom_5F5EBA: @ 0x085F5EBA
	.string "スーパーランク ゆうしょう!{EOS}"
	.if (. - gText_Rom_5F5EBA) > 0xf
	.error "gText_Rom_5F5EBA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F5EBA) < 0xf
	.space 0xf - (. - gText_Rom_5F5EBA)
	.endif
