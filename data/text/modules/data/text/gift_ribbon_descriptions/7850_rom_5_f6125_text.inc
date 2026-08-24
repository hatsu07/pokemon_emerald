	@ src/data/text/gift_ribbon_descriptions.h:19 gGiftRibbonDescriptionPart1_PokemonEvent
	.globl gGiftRibbonDescriptionPart1_PokemonEvent
gGiftRibbonDescriptionPart1_PokemonEvent: @ 0x085F6125
	.string "ポケモンの イベントに{EOS}"
	.if (. - gGiftRibbonDescriptionPart1_PokemonEvent) > 0xc
	.error "gGiftRibbonDescriptionPart1_PokemonEvent may not grow beyond its original slot"
	.endif
	.if (. - gGiftRibbonDescriptionPart1_PokemonEvent) < 0xc
	.space 0xc - (. - gGiftRibbonDescriptionPart1_PokemonEvent)
	.endif
