	@ data/maps/RustboroCity_PokemonSchool/scripts.inc:238 RustboroCity_PokemonSchool_Text_ConfusedPokemonAttacksItself
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_203128
gText_Rom_203128: @ 0x08203128
	.string "ポケモンの わざで\nこんらん することが あるでしょ?\pこんらん すると たまに まちがえて\nじぶんを こうげき しちゃうの……\pでも いちどでも せんとうから はなれると\nもとに もどるわよ!{EOS}"
	.if (. - gText_Rom_203128) != 0x62
	.error "gText_Rom_203128 must retain its original byte length"
	.endif
