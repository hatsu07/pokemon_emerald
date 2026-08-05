	@ data/maps/LilycoveCity_ContestHall/scripts.inc:370 LilycoveCity_ContestHall_Text_PokemonLooksLikeYoungerMe
	.globl gText_Rom_207F14
gText_Rom_207F14: @ 0x08207F14
	.string "この きれいな ポケモン\nあたしの わかい ころに そっくり！\pって いったら…… とうちゃんが\nのんでた おちゃを ふきだしたよ\pあたし なんか へんなこと いったかね?$"
	.if (. - gText_Rom_207F14) > 0x57
	.error "gText_Rom_207F14 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_207F14) < 0x57
	.space 0x57 - (. - gText_Rom_207F14)
	.endif
