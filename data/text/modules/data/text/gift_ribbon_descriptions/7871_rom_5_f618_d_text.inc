	@ src/data/text/gift_ribbon_descriptions.h:28 gGiftRibbonDescriptionPart1_BlackironTower
	.globl gGiftRibbonDescriptionPart1_BlackironTower
gGiftRibbonDescriptionPart1_BlackironTower: @ 0x085F618D
	.string "くろがねのとう クリア{EOS}"
	.if (. - gGiftRibbonDescriptionPart1_BlackironTower) > 0xc
	.error "gGiftRibbonDescriptionPart1_BlackironTower may not grow beyond its original slot"
	.endif
	.if (. - gGiftRibbonDescriptionPart1_BlackironTower) < 0xc
	.space 0xc - (. - gGiftRibbonDescriptionPart1_BlackironTower)
	.endif
