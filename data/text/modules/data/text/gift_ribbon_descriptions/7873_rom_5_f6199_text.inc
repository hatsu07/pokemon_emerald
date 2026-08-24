	@ src/data/text/gift_ribbon_descriptions.h:29 gGiftRibbonDescriptionPart1_FinalTower
	.globl gGiftRibbonDescriptionPart1_FinalTower
gGiftRibbonDescriptionPart1_FinalTower: @ 0x085F6199
	.string "さいごのとう クリア{EOS}"
	.if (. - gGiftRibbonDescriptionPart1_FinalTower) > 0xb
	.error "gGiftRibbonDescriptionPart1_FinalTower may not grow beyond its original slot"
	.endif
	.if (. - gGiftRibbonDescriptionPart1_FinalTower) < 0xb
	.space 0xb - (. - gGiftRibbonDescriptionPart1_FinalTower)
	.endif
