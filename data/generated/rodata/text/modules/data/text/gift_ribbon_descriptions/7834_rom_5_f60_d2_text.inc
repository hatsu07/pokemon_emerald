	@ src/data/text/gift_ribbon_descriptions.h:12 gGiftRibbonDescriptionPart1_2005GlobalCup
	.globl gText_Rom_5F60D2
gText_Rom_5F60D2: @ 0x085F60D2
	.string "2005ねん ワールドカップ$"
	.if (. - gText_Rom_5F60D2) > 0xf
	.error "gText_Rom_5F60D2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F60D2) < 0xf
	.space 0xf - (. - gText_Rom_5F60D2)
	.endif
