	@ data/maps/RustboroCity_PokemonSchool/scripts.inc:208 RustboroCity_PokemonSchool_Text_ExplainPoison
	.globl gText_Rom_202E63
gText_Rom_202E63: @ 0x08202E63
	.string "どくを うけると\nたいりょくが へっていきます\pせんとうのあとも どくは のこるので\nあるくたびに たいりょくが へります\lどくけしで なおしましょう$"
	.if (. - gText_Rom_202E63) > 0x4c
	.error "gText_Rom_202E63 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_202E63) < 0x4c
	.space 0x4c - (. - gText_Rom_202E63)
	.endif
