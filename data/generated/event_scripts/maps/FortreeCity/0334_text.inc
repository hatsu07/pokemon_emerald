	@ data/maps/FortreeCity/scripts.inc:129 FortreeCity_Text_PokemonThatEvolveWhenTraded
	.globl gText_Rom_1E008B
gText_Rom_1E008B: @ 0x081E008B
	.string "ともだちと こうかんを すると\nしんか する ポケモンが いるんだって!{EOS}"
	.if (. - gText_Rom_1E008B) > 0x25
	.error "gText_Rom_1E008B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E008B) < 0x25
	.space 0x25 - (. - gText_Rom_1E008B)
	.endif
