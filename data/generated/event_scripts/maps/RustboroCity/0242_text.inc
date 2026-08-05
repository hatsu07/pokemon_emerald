	@ data/maps/RustboroCity/scripts.inc:1073 RustboroCity_Text_PokemonCanChangeLookFromExp
	.globl gText_Rom_1DF511
gText_Rom_1DF511: @ 0x081DF511
	.string "ポケモンって たたかいの けいけんを\nつんでいくと すがたかたち が\lかわっちゃうことが あるんだよ!$"
	.if (. - gText_Rom_1DF511) > 0x34
	.error "gText_Rom_1DF511 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DF511) < 0x34
	.space 0x34 - (. - gText_Rom_1DF511)
	.endif
