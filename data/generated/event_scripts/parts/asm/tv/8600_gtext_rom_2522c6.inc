	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+31 aliases)
	.globl gText_Rom_2522C6
gText_Rom_2522C6: @ 0x082522C6
	.string "かかりいん『みんな　がんばってますよ\pとくに　{0xFD}{0x02}さん　なんて\nすごいです\pこの　あいだ　なんて　{0xFD}{0x03}ひきも\nつかまえたんですよ！$"
	.if (. - gText_Rom_2522C6) > 0x42
	.error "gText_Rom_2522C6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2522C6) < 0x42
	.space 0x42 - (. - gText_Rom_2522C6)
	.endif
