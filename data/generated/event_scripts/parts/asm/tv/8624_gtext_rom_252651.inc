	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+10 aliases)
	.globl gText_Rom_252651
gText_Rom_252651: @ 0x08252651
	.string "かんきゃく『1じ　しんさが　だめ　だったのに\n2じ　しんさで　だいぎゃくてん！\lミラクル　{0xFD}{0x03}　ばんざいーー！$"
	.if (. - gText_Rom_252651) > 0x38
	.error "gText_Rom_252651 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_252651) < 0x38
	.space 0x38 - (. - gText_Rom_252651)
	.endif
