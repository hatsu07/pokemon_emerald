	@ src/data/text/gift_ribbon_descriptions.h:46 gGiftRibbonDescriptionPart1_LoveForPokemon
	.globl gText_Rom_5F6270
gText_Rom_5F6270: @ 0x085F6270
	.string "ポケモンが だいすきな ことを{EOS}"
	.if (. - gText_Rom_5F6270) > 0x10
	.error "gText_Rom_5F6270 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F6270) < 0x10
	.space 0x10 - (. - gText_Rom_5F6270)
	.endif
