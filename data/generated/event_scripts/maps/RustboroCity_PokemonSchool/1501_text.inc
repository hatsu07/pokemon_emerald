	@ data/maps/RustboroCity_PokemonSchool/scripts.inc:226 RustboroCity_PokemonSchool_Text_ExplainQuickClaw
	.globl gText_Rom_203045
gText_Rom_203045: @ 0x08203045
	.string "ポケモンに せんせいのツメを もたせると\nときどき ですが すばやくなって\lせんせい こうげきを するのです!\pこのように ポケモンに もたせる\nどうぐの こと だけでも\lべんきょう することは いっぱい なのです!{EOS}"
	.if (. - gText_Rom_203045) > 0x6d
	.error "gText_Rom_203045 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_203045) < 0x6d
	.space 0x6d - (. - gText_Rom_203045)
	.endif
