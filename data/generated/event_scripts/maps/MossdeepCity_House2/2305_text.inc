	@ data/maps/MossdeepCity_House2/scripts.inc:57 MossdeepCity_House2_Text_PokemonCarriesMailBackAndForth
	.globl gText_Rom_20C46D
gText_Rom_20C46D: @ 0x0820C46D
	.string "ヒワマキの おともだちに あえなくても\nポケモンが おてがみを はこんでくれるの\lはなれていても さみしくないわ!{EOS}"
	.if (. - gText_Rom_20C46D) > 0x3a
	.error "gText_Rom_20C46D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20C46D) < 0x3a
	.space 0x3a - (. - gText_Rom_20C46D)
	.endif
