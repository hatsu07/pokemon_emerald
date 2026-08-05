	@ data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.inc:599 LilycoveCity_PokemonTrainerFanClub_Text_YourFatherNeverGaveUpSoKeepOnBattling
	.globl gText_Rom_208E1A
gText_Rom_208E1A: @ 0x08208E1A
	.string "きみの おとうさんは ピンチに なっても\nあきらめずに たたかって いたよ……\pわしは しっているよ\pきみは いくら まけても けっして\nあきらめない という ことを！\lだから がんばってくれ！$"
	.if (. - gText_Rom_208E1A) > 0x62
	.error "gText_Rom_208E1A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_208E1A) < 0x62
	.space 0x62 - (. - gText_Rom_208E1A)
	.endif
