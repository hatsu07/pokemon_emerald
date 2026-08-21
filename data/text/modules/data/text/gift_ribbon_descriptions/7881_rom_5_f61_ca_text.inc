	@ src/data/text/gift_ribbon_descriptions.h:33 gGiftRibbonDescriptionPart1_PokemonCenterNagoya
	.globl gText_Rom_5F61CA
gText_Rom_5F61CA: @ 0x085F61CA
	.string "ポケモンセンターナゴヤ{EOS}"
	.if (. - gText_Rom_5F61CA) > 0xc
	.error "gText_Rom_5F61CA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F61CA) < 0xc
	.space 0xc - (. - gText_Rom_5F61CA)
	.endif
