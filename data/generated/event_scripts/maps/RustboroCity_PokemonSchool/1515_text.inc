	@ data/maps/RustboroCity_PokemonSchool/scripts.inc:244 RustboroCity_PokemonSchool_Text_StudentsNotes
	.globl gText_Rom_2031E4
gText_Rom_2031E4: @ 0x082031E4
	.string "このこの ノートだ……\pポケモンは モンスターボールで つかまえて\nどうじに 6ぴき もちあるける\pそうして つかまえた ポケモンを\nそだてて たたかわせる ひとを\lポケモントレーナーと いう\pトレーナーの もくひょうは\nかくちの ポケモンジムに いる\lつよい トレーナーに かつこと!$"
	.if (. - gText_Rom_2031E4) > 0x90
	.error "gText_Rom_2031E4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2031E4) < 0x90
	.space 0x90 - (. - gText_Rom_2031E4)
	.endif
