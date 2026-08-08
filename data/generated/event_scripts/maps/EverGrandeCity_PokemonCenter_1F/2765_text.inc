	@ data/maps/EverGrandeCity_PokemonCenter_1F/scripts.inc:76 EverGrandeCity_PokemonCenter_1F_Text_LeagueAfterVictoryRoad
	.globl gText_Rom_2114A2
gText_Rom_2114A2: @ 0x082114A2
	.string "ポケモンリーグは\nチャンピオンロードを ぬけると すぐ!\pここまで きたら\nまえに すすむしかないわ!$"
	.if (. - gText_Rom_2114A2) > 0x34
	.error "gText_Rom_2114A2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2114A2) < 0x34
	.space 0x34 - (. - gText_Rom_2114A2)
	.endif
