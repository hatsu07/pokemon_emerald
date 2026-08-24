	@ src/data/text/gift_ribbon_descriptions.h:20 gGiftRibbonDescriptionPart1_PokemonFestival
	.globl gGiftRibbonDescriptionPart1_PokemonFestival
gGiftRibbonDescriptionPart1_PokemonFestival: @ 0x085F6131
	.string "ポケモンの おまつりに{EOS}"
	.if (. - gGiftRibbonDescriptionPart1_PokemonFestival) > 0xc
	.error "gGiftRibbonDescriptionPart1_PokemonFestival may not grow beyond its original slot"
	.endif
	.if (. - gGiftRibbonDescriptionPart1_PokemonFestival) < 0xc
	.space 0xc - (. - gGiftRibbonDescriptionPart1_PokemonFestival)
	.endif
