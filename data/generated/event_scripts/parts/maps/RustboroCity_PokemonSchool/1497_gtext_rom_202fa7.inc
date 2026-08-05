	@ data/maps/RustboroCity_PokemonSchool/scripts.inc:220 RustboroCity_PokemonSchool_Text_ExplainFreeze
	.globl gText_Rom_202FA7
gText_Rom_202FA7: @ 0x08202FA7
	.string "こおって しまうと なにも できなくなります\pたたかい おわっても こおりついた ままです\nこおりなおしで とかしましょう$"
	.if (. - gText_Rom_202FA7) > 0x3e
	.error "gText_Rom_202FA7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_202FA7) < 0x3e
	.space 0x3e - (. - gText_Rom_202FA7)
	.endif
