	@ src/data/text/gift_ribbon_descriptions.h:32 gGiftRibbonDescriptionPart1_PokemonCenterOsaka
	.globl gGiftRibbonDescriptionPart1_PokemonCenterOsaka
gGiftRibbonDescriptionPart1_PokemonCenterOsaka: @ 0x085F61BD
	.string "ポケモンセンターオーサカ{EOS}"
	.if (. - gGiftRibbonDescriptionPart1_PokemonCenterOsaka) > 0xd
	.error "gGiftRibbonDescriptionPart1_PokemonCenterOsaka may not grow beyond its original slot"
	.endif
	.if (. - gGiftRibbonDescriptionPart1_PokemonCenterOsaka) < 0xd
	.space 0xd - (. - gGiftRibbonDescriptionPart1_PokemonCenterOsaka)
	.endif
