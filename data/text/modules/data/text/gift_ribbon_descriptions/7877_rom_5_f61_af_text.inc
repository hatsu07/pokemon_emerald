	@ src/data/text/gift_ribbon_descriptions.h:31 gGiftRibbonDescriptionPart1_PokemonCenterTokyo
	.globl gGiftRibbonDescriptionPart1_PokemonCenterTokyo
gGiftRibbonDescriptionPart1_PokemonCenterTokyo: @ 0x085F61AF
	.string "ポケモンセンタートウキョー{EOS}"
	.if (. - gGiftRibbonDescriptionPart1_PokemonCenterTokyo) > 0xe
	.error "gGiftRibbonDescriptionPart1_PokemonCenterTokyo may not grow beyond its original slot"
	.endif
	.if (. - gGiftRibbonDescriptionPart1_PokemonCenterTokyo) < 0xe
	.space 0xe - (. - gGiftRibbonDescriptionPart1_PokemonCenterTokyo)
	.endif
