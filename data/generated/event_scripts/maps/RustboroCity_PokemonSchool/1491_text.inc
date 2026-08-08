	@ data/maps/RustboroCity_PokemonSchool/scripts.inc:211 RustboroCity_PokemonSchool_Text_ExplainParalysis
	.globl gText_Rom_202EAF
gText_Rom_202EAF: @ 0x08202EAF
	.string "まひすると すばやさが さがり\nときどき わざが だせなくなります\pたたかい おわっても まひした ままです\nまひなおしで なおしましょう$"
	.if (. - gText_Rom_202EAF) > 0x46
	.error "gText_Rom_202EAF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_202EAF) < 0x46
	.space 0x46 - (. - gText_Rom_202EAF)
	.endif
