	@ src/data/text/gift_ribbon_descriptions.h:30 gGiftRibbonDescriptionPart1_LegendMaking
	.globl gText_Rom_5F61A4
gText_Rom_5F61A4: @ 0x085F61A4
	.string "でんせつを つくった$"
	.if (. - gText_Rom_5F61A4) > 0xb
	.error "gText_Rom_5F61A4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F61A4) < 0xb
	.space 0xb - (. - gText_Rom_5F61A4)
	.endif
