	@ src/data/text/gift_ribbon_descriptions.h:33 gGiftRibbonDescriptionPart1_PokemonCenterNagoya
	.globl gGiftRibbonDescriptionPart1_PokemonCenterNagoya
gGiftRibbonDescriptionPart1_PokemonCenterNagoya: @ 0x085F61CA
	.string "ポケモンセンターナゴヤ{EOS}"
	.if (. - gGiftRibbonDescriptionPart1_PokemonCenterNagoya) > 0xc
	.error "gGiftRibbonDescriptionPart1_PokemonCenterNagoya may not grow beyond its original slot"
	.endif
	.if (. - gGiftRibbonDescriptionPart1_PokemonCenterNagoya) < 0xc
	.space 0xc - (. - gGiftRibbonDescriptionPart1_PokemonCenterNagoya)
	.endif
