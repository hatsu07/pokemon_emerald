	@ src/data/text/gift_ribbon_descriptions.h:34 gGiftRibbonDescriptionPart1_PokemonCenterNY
	.globl gText_Rom_5F61D6
gText_Rom_5F61D6: @ 0x085F61D6
	.string "ポケモンセンターニューヨーク$"
	.if (. - gText_Rom_5F61D6) > 0xf
	.error "gText_Rom_5F61D6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F61D6) < 0xf
	.space 0xf - (. - gText_Rom_5F61D6)
	.endif
