	@ data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.inc:602 LilycoveCity_PokemonTrainerFanClub_Text_LongWayToGoComparedToNorman
	.globl gText_Rom_208E7C
gText_Rom_208E7C: @ 0x08208E7C
	.string "きみより センリさんの ほうが\nもっと つよくて かっこよく\lみごたえの ある たたかいを していたぞ！\pいくら きみが つよいと\nいわれて いても\pきみの おとうさんに くらべたら\nまだまだ だな$"
	.if (. - gText_Rom_208E7C) > 0x64
	.error "gText_Rom_208E7C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_208E7C) < 0x64
	.space 0x64 - (. - gText_Rom_208E7C)
	.endif
