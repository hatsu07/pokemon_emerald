	@ data/maps/LilycoveCity_PokemonCenter_1F/scripts.inc:51 LilycoveCity_PokemonCenter_1F_Text_HowManyKindsOfPokemon
	.globl gText_Rom_2082B6
gText_Rom_2082B6: @ 0x082082B6
	.string "この せかいには\nどれだけの ポケモンが いるのかな?\pいつのひか うみを こえて\nとおい くにの ひとと\lポケモン こうかん したいなあ！{EOS}"
	.if (. - gText_Rom_2082B6) > 0x47
	.error "gText_Rom_2082B6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2082B6) < 0x47
	.space 0x47 - (. - gText_Rom_2082B6)
	.endif
