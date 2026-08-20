	@ data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.inc:266 LilycoveCity_LilycoveMuseum_2F_Text_ItsPaintingOfPokemon
	.globl gText_Rom_2067F2
gText_Rom_2067F2: @ 0x082067F2
	.string "ポケモンの えが かざってある!{EOS}"
	.if (. - gText_Rom_2067F2) > 0x11
	.error "gText_Rom_2067F2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2067F2) < 0x11
	.space 0x11 - (. - gText_Rom_2067F2)
	.endif
