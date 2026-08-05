	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+10 aliases)
	.globl gText_Rom_252863
gText_Rom_252863: @ 0x08252863
	.string "{0xFD}{0x03}！\nさいこうに　たくましいー！"
	.byte EOS
	.if (. - gText_Rom_252863) > 0x12
	.error "gText_Rom_252863 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_252863) < 0x12
	.space 0x12 - (. - gText_Rom_252863)
	.endif
