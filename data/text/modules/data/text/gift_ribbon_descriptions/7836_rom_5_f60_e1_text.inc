	@ src/data/text/gift_ribbon_descriptions.h:13 gGiftRibbonDescriptionPart1_PokemonBattleCup
	.globl gGiftRibbonDescriptionPart1_PokemonBattleCup
gGiftRibbonDescriptionPart1_PokemonBattleCup: @ 0x085F60E1
	.string "ポケモン バトル カップ{EOS}"
	.if (. - gGiftRibbonDescriptionPart1_PokemonBattleCup) > 0xd
	.error "gGiftRibbonDescriptionPart1_PokemonBattleCup may not grow beyond its original slot"
	.endif
	.if (. - gGiftRibbonDescriptionPart1_PokemonBattleCup) < 0xd
	.space 0xd - (. - gGiftRibbonDescriptionPart1_PokemonBattleCup)
	.endif
