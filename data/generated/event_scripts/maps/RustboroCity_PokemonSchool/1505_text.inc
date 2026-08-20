	@ data/maps/RustboroCity_PokemonSchool/scripts.inc:232 RustboroCity_PokemonSchool_Text_AlwaysWantedSeedot
	.globl gText_Rom_2030CD
gText_Rom_2030CD: @ 0x082030CD
	.string "ほしかった タネボーちゃん が\nやっと てに はいるよ!{EOS}"
	.if (. - gText_Rom_2030CD) > 0x1d
	.error "gText_Rom_2030CD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2030CD) < 0x1d
	.space 0x1d - (. - gText_Rom_2030CD)
	.endif
