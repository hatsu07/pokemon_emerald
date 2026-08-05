	@ data/maps/RustboroCity_PokemonSchool/scripts.inc:205 RustboroCity_PokemonSchool_Text_ReadWhichTopic
	.globl gText_Rom_202E54
gText_Rom_202E54: @ 0x08202E54
	.string "どの こうもくを みますか?$"
	.if (. - gText_Rom_202E54) > 0xf
	.error "gText_Rom_202E54 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_202E54) < 0xf
	.space 0xf - (. - gText_Rom_202E54)
	.endif
