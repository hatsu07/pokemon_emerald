	@ data/maps/RustboroCity_PokemonSchool/scripts.inc:217 RustboroCity_PokemonSchool_Text_ExplainBurn
	.globl gText_Rom_202F56
gText_Rom_202F56: @ 0x08202F56
	.string "やけどは こうげきりょくが さがるだけでなく\nたいりょくも どんどん へっていきます\pせんとうが おわっても やけどの ままです\nやけどなおしで なおしましょう$"
	.if (. - gText_Rom_202F56) > 0x51
	.error "gText_Rom_202F56 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_202F56) < 0x51
	.space 0x51 - (. - gText_Rom_202F56)
	.endif
