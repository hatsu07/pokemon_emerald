	@ src/data/text/gift_ribbon_descriptions.h:31 gGiftRibbonDescriptionPart1_PokemonCenterTokyo
	.globl gText_Rom_5F61AF
gText_Rom_5F61AF: @ 0x085F61AF
	.string "ポケモンセンタートウキョー{EOS}"
	.if (. - gText_Rom_5F61AF) > 0xe
	.error "gText_Rom_5F61AF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F61AF) < 0xe
	.space 0xe - (. - gText_Rom_5F61AF)
	.endif
