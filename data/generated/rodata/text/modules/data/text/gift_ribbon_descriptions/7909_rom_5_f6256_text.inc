	@ src/data/text/gift_ribbon_descriptions.h:44 gGiftRibbonDescriptionPart1_LovedPokemon
	.globl gText_Rom_5F6256
gText_Rom_5F6256: @ 0x085F6256
	.string "だいすきな ポケモンに$"
	.if (. - gText_Rom_5F6256) > 0xc
	.error "gText_Rom_5F6256 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F6256) < 0xc
	.space 0xc - (. - gText_Rom_5F6256)
	.endif
