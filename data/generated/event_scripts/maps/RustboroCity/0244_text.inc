	@ data/maps/RustboroCity/scripts.inc:1078 RustboroCity_Text_PokemonChangeShape
	.globl gText_Rom_1DF545
gText_Rom_1DF545: @ 0x081DF545
	.string "ポケモンの すがたが かわっちゃうの?\nいきなり かわると ビックリしちゃう!$"
	.if (. - gText_Rom_1DF545) > 0x28
	.error "gText_Rom_1DF545 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DF545) < 0x28
	.space 0x28 - (. - gText_Rom_1DF545)
	.endif
