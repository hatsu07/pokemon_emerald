	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+13 aliases)
	.globl gText_Rom_24E4E6
gText_Rom_24E4E6: @ 0x0824E4E6
	.string "この　「{0xFD}{0x02}」という　ニックネームは\nとても　ながれの　よい\lニックネーム　ですなぁ\p「{0xFD}{0x03}」の　もじの　あとに\n「{0xFD}{0x04}」がくる　ながれが　とても　よい！$"
	.if (. - gText_Rom_24E4E6) > 0x4e
	.error "gText_Rom_24E4E6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24E4E6) < 0x4e
	.space 0x4e - (. - gText_Rom_24E4E6)
	.endif
