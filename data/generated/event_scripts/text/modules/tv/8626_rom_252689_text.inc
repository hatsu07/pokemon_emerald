	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+10 aliases)
	.globl gText_Rom_252689
gText_Rom_252689: @ 0x08252689
	.string "かんきゃく『1じ　しんさも　2じ　しんさも\nあんてい　しておったのう……\p{0xFD}{0x03}に　{0xFD}{0x04}さん！\nあんたら　ただものでは　ないのう……$"
	.if (. - gText_Rom_252689) > 0x42
	.error "gText_Rom_252689 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_252689) < 0x42
	.space 0x42 - (. - gText_Rom_252689)
	.endif
