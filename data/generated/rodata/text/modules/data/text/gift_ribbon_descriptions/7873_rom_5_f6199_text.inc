	@ src/data/text/gift_ribbon_descriptions.h:29 gGiftRibbonDescriptionPart1_FinalTower
	.globl gText_Rom_5F6199
gText_Rom_5F6199: @ 0x085F6199
	.string "さいごのとう クリア$"
	.if (. - gText_Rom_5F6199) > 0xb
	.error "gText_Rom_5F6199 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F6199) < 0xb
	.space 0xb - (. - gText_Rom_5F6199)
	.endif
