	@ src/data/text/gift_ribbon_descriptions.h:16 gGiftRibbonDescriptionPart1_AdvanceCup
	.globl gText_Rom_5F6102
gText_Rom_5F6102: @ 0x085F6102
	.string "アドバンス カップ$"
	.if (. - gText_Rom_5F6102) > 0xa
	.error "gText_Rom_5F6102 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F6102) < 0xa
	.space 0xa - (. - gText_Rom_5F6102)
	.endif
