	@ data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.inc:560 LilycoveCity_PokemonTrainerFanClub_Text_OhWowItsPlayer
	.globl gText_Rom_208B17
gText_Rom_208B17: @ 0x08208B17
	.string "いいあ！\n{PLAYER}だ！！{EOS}"
	.if (. - gText_Rom_208B17) > 0xb
	.error "gText_Rom_208B17 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_208B17) < 0xb
	.space 0xb - (. - gText_Rom_208B17)
	.endif
