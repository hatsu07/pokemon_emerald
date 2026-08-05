	@ src/data/text/ribbon_descriptions.h:16 gRibbonDescriptionPart1_Artist
	.globl gText_Rom_5F5F21
gText_Rom_5F5F21: @ 0x085F5F21
	.string "ごうかな にがおえの モデルに$"
	.if (. - gText_Rom_5F5F21) > 0x10
	.error "gText_Rom_5F5F21 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F5F21) < 0x10
	.space 0x10 - (. - gText_Rom_5F5F21)
	.endif
