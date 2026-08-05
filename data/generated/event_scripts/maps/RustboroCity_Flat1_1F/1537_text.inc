	@ data/maps/RustboroCity_Flat1_1F/scripts.inc:12 RustboroCity_Flat1_1F_Text_EveryPokemonHasAbility
	.globl gText_Rom_203727
gText_Rom_203727: @ 0x08203727
	.string "ポケモンには それぞれ\nとくせい とよばれる ふしぎな ちからが\lそなわって いるんだよな$"
	.if (. - gText_Rom_203727) > 0x2e
	.error "gText_Rom_203727 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_203727) < 0x2e
	.space 0x2e - (. - gText_Rom_203727)
	.endif
