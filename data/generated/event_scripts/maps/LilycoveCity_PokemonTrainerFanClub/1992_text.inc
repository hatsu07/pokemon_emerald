	@ data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.inc:569 LilycoveCity_PokemonTrainerFanClub_Text_OthersDontKnowYoureTheBest
	.globl gText_Rom_208C00
gText_Rom_208C00: @ 0x08208C00
	.string "あいつらは しらないんだ\nきみが いちばん すごいって ことをさ！\pそうだろ {PLAYER}！\nこんじょう みせてくれ！$"
	.if (. - gText_Rom_208C00) > 0x38
	.error "gText_Rom_208C00 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_208C00) < 0x38
	.space 0x38 - (. - gText_Rom_208C00)
	.endif
