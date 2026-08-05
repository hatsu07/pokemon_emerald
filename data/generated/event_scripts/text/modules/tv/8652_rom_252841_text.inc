	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+10 aliases)
	.globl gText_Rom_252841
gText_Rom_252841: @ 0x08252841
	.string "{0xFD}{0x03}！\nさいこうに　かわいいー！"
	.byte EOS
	.if (. - gText_Rom_252841) > 0x11
	.error "gText_Rom_252841 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_252841) < 0x11
	.space 0x11 - (. - gText_Rom_252841)
	.endif
