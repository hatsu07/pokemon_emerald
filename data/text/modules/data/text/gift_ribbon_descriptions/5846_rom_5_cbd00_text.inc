	@ src/data/text/gift_ribbon_descriptions.h:15 gGiftRibbonDescriptionPart1_PokemonLeague
	.globl gGiftRibbonDescriptionPart1_PokemonLeague_Copy_GiftRibbonDescriptions
gGiftRibbonDescriptionPart1_PokemonLeague_Copy_GiftRibbonDescriptions: @ 0x085CBD00
	.string "ポケモン リーグ{EOS}"
	.if (. - gGiftRibbonDescriptionPart1_PokemonLeague_Copy_GiftRibbonDescriptions) > 0x9
	.error "gGiftRibbonDescriptionPart1_PokemonLeague_Copy_GiftRibbonDescriptions may not grow beyond its original slot"
	.endif
	.if (. - gGiftRibbonDescriptionPart1_PokemonLeague_Copy_GiftRibbonDescriptions) < 0x9
	.space 0x9 - (. - gGiftRibbonDescriptionPart1_PokemonLeague_Copy_GiftRibbonDescriptions)
	.endif
