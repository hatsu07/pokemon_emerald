	@ src/data/text/gift_ribbon_descriptions.h:32 gGiftRibbonDescriptionPart1_PokemonCenterOsaka
	.globl gText_Rom_5F61BD
gText_Rom_5F61BD: @ 0x085F61BD
	.string "ポケモンセンターオーサカ$"
	.if (. - gText_Rom_5F61BD) > 0xd
	.error "gText_Rom_5F61BD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F61BD) < 0xd
	.space 0xd - (. - gText_Rom_5F61BD)
	.endif
