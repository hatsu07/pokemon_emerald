	@ src/data/text/gift_ribbon_descriptions.h:15 gGiftRibbonDescriptionPart1_PokemonLeague
	.globl gGiftRibbonDescriptionPart1_PokemonLeague
gGiftRibbonDescriptionPart1_PokemonLeague: @ 0x085F60F9
	.string "ポケモン リーグ{EOS}"
	.if (. - gGiftRibbonDescriptionPart1_PokemonLeague) > 0x9
	.error "gGiftRibbonDescriptionPart1_PokemonLeague may not grow beyond its original slot"
	.endif
	.if (. - gGiftRibbonDescriptionPart1_PokemonLeague) < 0x9
	.space 0x9 - (. - gGiftRibbonDescriptionPart1_PokemonLeague)
	.endif
