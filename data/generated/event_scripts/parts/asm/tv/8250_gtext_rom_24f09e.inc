	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+6 aliases)
	.globl gText_Rom_24F09E
gText_Rom_24F09E: @ 0x0824F09E
	.string "インタビュアー『{0xFD}{0x03}　といえば\nわたし　なんか　このまえ\l{0xFD}{0x04}こも　かいましたよ！\p{0xFD}{0x03}って　いいですからねー！$"
	.if (. - gText_Rom_24F09E) > 0x39
	.error "gText_Rom_24F09E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24F09E) < 0x39
	.space 0x39 - (. - gText_Rom_24F09E)
	.endif
