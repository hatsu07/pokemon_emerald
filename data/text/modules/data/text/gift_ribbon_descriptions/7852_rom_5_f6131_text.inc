	@ src/data/text/gift_ribbon_descriptions.h:20 gGiftRibbonDescriptionPart1_PokemonFestival
	.globl gText_Rom_5F6131
gText_Rom_5F6131: @ 0x085F6131
	.string "ポケモンの おまつりに{EOS}"
	.if (. - gText_Rom_5F6131) > 0xc
	.error "gText_Rom_5F6131 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F6131) < 0xc
	.space 0xc - (. - gText_Rom_5F6131)
	.endif
