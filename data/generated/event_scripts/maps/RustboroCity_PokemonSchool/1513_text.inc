	@ data/maps/RustboroCity_PokemonSchool/scripts.inc:241 RustboroCity_PokemonSchool_Text_PokemonHealItselfWithBerry
	.globl gText_Rom_20318A
gText_Rom_20318A: @ 0x0820318A
	.string "……ポケモンに きのみを もたせると\nじぶんで たいりょくを かいふくする\pポケモンが もてる どうぐは\nほかにも たくさん……\pノートを ちゃんと とるのは\nたいへんだなあ……$"
	.if (. - gText_Rom_20318A) > 0x5a
	.error "gText_Rom_20318A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20318A) < 0x5a
	.space 0x5a - (. - gText_Rom_20318A)
	.endif
