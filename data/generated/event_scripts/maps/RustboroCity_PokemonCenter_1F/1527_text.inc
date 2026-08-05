	@ data/maps/RustboroCity_PokemonCenter_1F/scripts.inc:34 RustboroCity_PokemonCenter_1F_Text_MaleAndFemalePokemon
	.globl gText_Rom_20353E
gText_Rom_20353E: @ 0x0820353E
	.string "にんげんと おなじで\nポケモンにも オスと メスが いるんだけど\lだから なにが ちがうのかは\lさっぱり わかっていない らしいよ$"
	.if (. - gText_Rom_20353E) > 0x42
	.error "gText_Rom_20353E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20353E) < 0x42
	.space 0x42 - (. - gText_Rom_20353E)
	.endif
