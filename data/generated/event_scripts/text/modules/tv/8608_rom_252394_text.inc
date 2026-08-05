	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+31 aliases)
	.globl gText_Rom_252394
gText_Rom_252394: @ 0x08252394
	.string "かかりいん『みんな　いまいち　ですね……\pとくに　{0xFD}{0x02}さんは\nひどかった　ですね\pこの　あいだ　なんて　{0xFD}{0x03}ひき　しか\nつかまえられません　でしたから$"
	.if (. - gText_Rom_252394) > 0x4c
	.error "gText_Rom_252394 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_252394) < 0x4c
	.space 0x4c - (. - gText_Rom_252394)
	.endif
