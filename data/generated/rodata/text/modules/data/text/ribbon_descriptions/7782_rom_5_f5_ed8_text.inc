	@ src/data/text/ribbon_descriptions.h:11 gRibbonDescriptionPart2_MasterRank
	.globl gText_Rom_5F5ED8
gText_Rom_5F5ED8: @ 0x085F5ED8
	.string "マスターランク ゆうしょう!$"
	.if (. - gText_Rom_5F5ED8) > 0xf
	.error "gText_Rom_5F5ED8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F5ED8) < 0xf
	.space 0xf - (. - gText_Rom_5F5ED8)
	.endif
