	@ src/data/text/gift_ribbon_descriptions.h:46 gGiftRibbonDescriptionPart1_LoveForPokemon
	.globl gGiftRibbonDescriptionPart1_LoveForPokemon
gGiftRibbonDescriptionPart1_LoveForPokemon: @ 0x085F6270
	.string "ポケモンが だいすきな ことを{EOS}"
	.if (. - gGiftRibbonDescriptionPart1_LoveForPokemon) > 0x10
	.error "gGiftRibbonDescriptionPart1_LoveForPokemon may not grow beyond its original slot"
	.endif
	.if (. - gGiftRibbonDescriptionPart1_LoveForPokemon) < 0x10
	.space 0x10 - (. - gGiftRibbonDescriptionPart1_LoveForPokemon)
	.endif
