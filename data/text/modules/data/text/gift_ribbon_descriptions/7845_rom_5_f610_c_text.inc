	@ src/data/text/gift_ribbon_descriptions.h:17 gGiftRibbonDescriptionPart1_PokemonTournament
	.globl gGiftRibbonDescriptionPart1_PokemonTournament
gGiftRibbonDescriptionPart1_PokemonTournament: @ 0x085F610C
	.string "ポケモンの たいかいに{EOS}"
	.if (. - gGiftRibbonDescriptionPart1_PokemonTournament) > 0xc
	.error "gGiftRibbonDescriptionPart1_PokemonTournament may not grow beyond its original slot"
	.endif
	.if (. - gGiftRibbonDescriptionPart1_PokemonTournament) < 0xc
	.space 0xc - (. - gGiftRibbonDescriptionPart1_PokemonTournament)
	.endif
