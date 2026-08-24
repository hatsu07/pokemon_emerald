	@ src/data/text/gift_ribbon_descriptions.h:34 gGiftRibbonDescriptionPart1_PokemonCenterNY
	.globl gGiftRibbonDescriptionPart1_PokemonCenterNY
gGiftRibbonDescriptionPart1_PokemonCenterNY: @ 0x085F61D6
	.string "ポケモンセンターニューヨーク{EOS}"
	.if (. - gGiftRibbonDescriptionPart1_PokemonCenterNY) > 0xf
	.error "gGiftRibbonDescriptionPart1_PokemonCenterNY may not grow beyond its original slot"
	.endif
	.if (. - gGiftRibbonDescriptionPart1_PokemonCenterNY) < 0xf
	.space 0xf - (. - gGiftRibbonDescriptionPart1_PokemonCenterNY)
	.endif
