	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+31 aliases)
	.globl gText_Rom_2523E0
gText_Rom_2523E0: @ 0x082523E0
	.string "かかりいん『みんな　いまいち　ですね……\pとくに　{0xFD}{0x02}さんは\nひどかった　ですね\pこの　あいだ　なんて　1ひきも\nつかまえられません　でしたから……$"
	.if (. - gText_Rom_2523E0) > 0x4b
	.error "gText_Rom_2523E0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2523E0) < 0x4b
	.space 0x4b - (. - gText_Rom_2523E0)
	.endif
