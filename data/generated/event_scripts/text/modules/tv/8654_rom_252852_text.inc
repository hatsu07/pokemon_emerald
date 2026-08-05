	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+10 aliases)
	.globl gText_Rom_252852
gText_Rom_252852: @ 0x08252852
	.string "{0xFD}{0x03}！\nさいこうに　かしこいー！"
	.byte EOS
	.if (. - gText_Rom_252852) > 0x11
	.error "gText_Rom_252852 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_252852) < 0x11
	.space 0x11 - (. - gText_Rom_252852)
	.endif
