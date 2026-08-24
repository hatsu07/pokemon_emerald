	@ src/data/text/gift_ribbon_descriptions.h:27 gGiftRibbonDescriptionPart1_RedTower
	.globl gGiftRibbonDescriptionPart1_RedTower
gGiftRibbonDescriptionPart1_RedTower: @ 0x085F6181
	.string "くれないのとう クリア{EOS}"
	.if (. - gGiftRibbonDescriptionPart1_RedTower) > 0xc
	.error "gGiftRibbonDescriptionPart1_RedTower may not grow beyond its original slot"
	.endif
	.if (. - gGiftRibbonDescriptionPart1_RedTower) < 0xc
	.space 0xc - (. - gGiftRibbonDescriptionPart1_RedTower)
	.endif
