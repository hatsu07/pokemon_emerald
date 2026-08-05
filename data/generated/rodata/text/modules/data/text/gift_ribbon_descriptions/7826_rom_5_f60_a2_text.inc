	@ src/data/text/gift_ribbon_descriptions.h:9 gGiftRibbonDescriptionPart1_2004GlobalCup
	.globl gText_Rom_5F60A2
gText_Rom_5F60A2: @ 0x085F60A2
	.string "2004ねん ワールドカップ$"
	.if (. - gText_Rom_5F60A2) > 0xf
	.error "gText_Rom_5F60A2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F60A2) < 0xf
	.space 0xf - (. - gText_Rom_5F60A2)
	.endif
