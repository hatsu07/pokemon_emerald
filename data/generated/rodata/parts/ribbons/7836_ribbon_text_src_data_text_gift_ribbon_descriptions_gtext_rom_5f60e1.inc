	@ src/data/text/gift_ribbon_descriptions.h:13 gGiftRibbonDescriptionPart1_PokemonBattleCup
	.globl gText_Rom_5F60E1
gText_Rom_5F60E1: @ 0x085F60E1
	.string "ポケモン バトル カップ$"
	.if (. - gText_Rom_5F60E1) > 0xd
	.error "gText_Rom_5F60E1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F60E1) < 0xd
	.space 0xd - (. - gText_Rom_5F60E1)
	.endif
