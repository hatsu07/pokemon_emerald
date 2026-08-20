	@ src/data/text/ribbon_descriptions.h:1 gRibbonDescriptionPart1_Champion
	.globl gText_Rom_5F5E58
gText_Rom_5F5E58: @ 0x085F5E58
	.string "チャンピオンを たおして{EOS}"
	.if (. - gText_Rom_5F5E58) > 0xd
	.error "gText_Rom_5F5E58 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F5E58) < 0xd
	.space 0xd - (. - gText_Rom_5F5E58)
	.endif
