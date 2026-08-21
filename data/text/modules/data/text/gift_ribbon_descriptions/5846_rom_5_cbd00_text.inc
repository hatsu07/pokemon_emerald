	@ src/data/text/gift_ribbon_descriptions.h:15 gGiftRibbonDescriptionPart1_PokemonLeague
	.globl gText_Rom_5CBD00
gText_Rom_5CBD00: @ 0x085CBD00
	.string "ポケモン リーグ{EOS}"
	.if (. - gText_Rom_5CBD00) > 0x9
	.error "gText_Rom_5CBD00 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBD00) < 0x9
	.space 0x9 - (. - gText_Rom_5CBD00)
	.endif
