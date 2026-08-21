	@ src/data/text/gift_ribbon_descriptions.h:17 gGiftRibbonDescriptionPart1_PokemonTournament
	.globl gText_Rom_5F610C
gText_Rom_5F610C: @ 0x085F610C
	.string "ポケモンの たいかいに{EOS}"
	.if (. - gText_Rom_5F610C) > 0xc
	.error "gText_Rom_5F610C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F610C) < 0xc
	.space 0xc - (. - gText_Rom_5F610C)
	.endif
