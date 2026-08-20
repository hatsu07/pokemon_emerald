	@ data/maps/RustboroCity_PokemonSchool/scripts.inc:235 RustboroCity_PokemonSchool_Text_PokemontCantUseManMadeItems
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2030EA
gText_Rom_2030EA: @ 0x082030EA
	.string "ポケモンも どうぐ もてるけど\nキズぐすりとか どくけしとか\lひとが つくった どうぐは\lつかいかたが わからない みたい{EOS}"
	.if (. - gText_Rom_2030EA) != 0x3e
	.error "gText_Rom_2030EA must retain its original byte length"
	.endif
