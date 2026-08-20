	@ data/maps/RustboroCity_PokemonCenter_1F/scripts.inc:31 RustboroCity_PokemonCenter_1F_Text_PokemonHavePersonalities
	.globl gText_Rom_2034F0
gText_Rom_2034F0: @ 0x082034F0
	.string "わしの ポケモンは むじゃき で\nともだちの ポケモンは ようき なんだよ\pポケモンにも せいかくが ある というのは\nなかなか おもしろい もんだねー!{EOS}"
	.if (. - gText_Rom_2034F0) > 0x4e
	.error "gText_Rom_2034F0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2034F0) < 0x4e
	.space 0x4e - (. - gText_Rom_2034F0)
	.endif
