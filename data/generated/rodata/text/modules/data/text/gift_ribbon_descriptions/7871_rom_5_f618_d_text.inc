	@ src/data/text/gift_ribbon_descriptions.h:28 gGiftRibbonDescriptionPart1_BlackironTower
	.globl gText_Rom_5F618D
gText_Rom_5F618D: @ 0x085F618D
	.string "くろがねのとう クリア{EOS}"
	.if (. - gText_Rom_5F618D) > 0xc
	.error "gText_Rom_5F618D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F618D) < 0xc
	.space 0xc - (. - gText_Rom_5F618D)
	.endif
