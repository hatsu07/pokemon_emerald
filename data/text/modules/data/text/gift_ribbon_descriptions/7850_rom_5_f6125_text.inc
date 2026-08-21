	@ src/data/text/gift_ribbon_descriptions.h:19 gGiftRibbonDescriptionPart1_PokemonEvent
	.globl gText_Rom_5F6125
gText_Rom_5F6125: @ 0x085F6125
	.string "ポケモンの イベントに{EOS}"
	.if (. - gText_Rom_5F6125) > 0xc
	.error "gText_Rom_5F6125 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F6125) < 0xc
	.space 0xc - (. - gText_Rom_5F6125)
	.endif
