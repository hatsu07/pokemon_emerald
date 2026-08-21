	@ src/data/text/ribbon_descriptions.h:12 gRibbonDescriptionPart1_Winning
	.globl gText_Rom_5F5EE7
gText_Rom_5F5EE7: @ 0x085F5EE7
	.string "バトルタワー レベル50を{EOS}"
	.if (. - gText_Rom_5F5EE7) > 0xe
	.error "gText_Rom_5F5EE7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F5EE7) < 0xe
	.space 0xe - (. - gText_Rom_5F5EE7)
	.endif
