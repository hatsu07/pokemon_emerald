	@ data/maps/RustboroCity_PokemonSchool/scripts.inc:214 RustboroCity_PokemonSchool_Text_ExplainSleep
	.globl gText_Rom_202EF5
gText_Rom_202EF5: @ 0x08202EF5
	.string "ねむって しまうと\nその あいだ こうげき できません\pじぶんで めざめることも ありますが\nねむったまま せんとうが おわると\lずっと ねむっています\pねむけざましで おこして あげましょう{EOS}"
	.if (. - gText_Rom_202EF5) > 0x61
	.error "gText_Rom_202EF5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_202EF5) < 0x61
	.space 0x61 - (. - gText_Rom_202EF5)
	.endif
