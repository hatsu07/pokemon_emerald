	@ data/maps/RustboroCity_PokemonSchool/scripts.inc:229 RustboroCity_PokemonSchool_Text_TradingRightNow
	.globl gText_Rom_2030B2
gText_Rom_2030B2: @ 0x082030B2
	.string "いま ともだちと\nポケモンを こうかん してるんだ!$"
	.if (. - gText_Rom_2030B2) > 0x1b
	.error "gText_Rom_2030B2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2030B2) < 0x1b
	.space 0x1b - (. - gText_Rom_2030B2)
	.endif
