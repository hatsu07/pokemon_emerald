	@ data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.inc:611 LilycoveCity_PokemonTrainerFanClub_Text_OhWoweeItsPlayer
	.globl gText_Rom_208FA5
gText_Rom_208FA5: @ 0x08208FA5
	.string "うわー！ {PLAYER}だー\nほんもの だー\pあくしゅ してー\nあくしゅ！{EOS}"
	.if (. - gText_Rom_208FA5) > 0x21
	.error "gText_Rom_208FA5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_208FA5) < 0x21
	.space 0x21 - (. - gText_Rom_208FA5)
	.endif
