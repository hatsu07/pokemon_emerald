	@ src/data/text/gift_ribbon_descriptions.h:44 gGiftRibbonDescriptionPart1_LovedPokemon
	.globl gGiftRibbonDescriptionPart1_LovedPokemon
gGiftRibbonDescriptionPart1_LovedPokemon: @ 0x085F6256
	.string "だいすきな ポケモンに{EOS}"
	.if (. - gGiftRibbonDescriptionPart1_LovedPokemon) > 0xc
	.error "gGiftRibbonDescriptionPart1_LovedPokemon may not grow beyond its original slot"
	.endif
	.if (. - gGiftRibbonDescriptionPart1_LovedPokemon) < 0xc
	.space 0xc - (. - gGiftRibbonDescriptionPart1_LovedPokemon)
	.endif
