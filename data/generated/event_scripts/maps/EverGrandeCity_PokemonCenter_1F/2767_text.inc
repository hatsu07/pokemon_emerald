	@ data/maps/EverGrandeCity_PokemonCenter_1F/scripts.inc:79 EverGrandeCity_PokemonCenter_1F_Text_BelieveInYourPokemon
	.globl gText_Rom_2114D6
gText_Rom_2114D6: @ 0x082114D6
	.string "チャンピオンロードの\nながくて けわしい みちのり……\pまるで いままで あるいてきた みちを\nおもいださせるかの ようだな\pきみ じぶんの ポケモンを\nしんじて がんばりたまえ!{EOS}"
	.if (. - gText_Rom_2114D6) > 0x5b
	.error "gText_Rom_2114D6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2114D6) < 0x5b
	.space 0x5b - (. - gText_Rom_2114D6)
	.endif
