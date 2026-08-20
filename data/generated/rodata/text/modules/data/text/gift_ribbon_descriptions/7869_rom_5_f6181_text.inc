	@ src/data/text/gift_ribbon_descriptions.h:27 gGiftRibbonDescriptionPart1_RedTower
	.globl gText_Rom_5F6181
gText_Rom_5F6181: @ 0x085F6181
	.string "くれないのとう クリア{EOS}"
	.if (. - gText_Rom_5F6181) > 0xc
	.error "gText_Rom_5F6181 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F6181) < 0xc
	.space 0xc - (. - gText_Rom_5F6181)
	.endif
