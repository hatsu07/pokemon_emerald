	@ data/maps/RustboroCity_PokemonSchool/scripts.inc:250 RustboroCity_PokemonSchool_Text_StudentTalentLevelUnknown
	.globl gText_Rom_203339
gText_Rom_203339: @ 0x08203339
	.string "エニシダ『うーん ここに いる\nせいとさん たちの さいのうは\lまだまだ みちすう! これから だな!$"
	.if (. - gText_Rom_203339) > 0x34
	.error "gText_Rom_203339 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_203339) < 0x34
	.space 0x34 - (. - gText_Rom_203339)
	.endif
