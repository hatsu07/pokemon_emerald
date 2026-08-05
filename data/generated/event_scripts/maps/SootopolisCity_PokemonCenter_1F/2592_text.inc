	@ data/maps/SootopolisCity_PokemonCenter_1F/scripts.inc:52 SootopolisCity_PokemonCenter_1F_Text_AlwaysBeFriendsWithPokemon
	.globl gText_Rom_20F117
gText_Rom_20F117: @ 0x0820F117
	.string "どんな ときでも\nどんな ことが あっても\lあたし ポケモンと ともだちで いるわ\pだって ポケモンと いっしょだと\nすごく たのしいもの!$"
	.if (. - gText_Rom_20F117) > 0x47
	.error "gText_Rom_20F117 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20F117) < 0x47
	.space 0x47 - (. - gText_Rom_20F117)
	.endif
