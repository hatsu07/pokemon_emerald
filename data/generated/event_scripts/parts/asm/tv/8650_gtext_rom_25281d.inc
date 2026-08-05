	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+10 aliases)
	.globl gText_Rom_25281D
gText_Rom_25281D: @ 0x0825281D
	.string "{0xFD}{0x03}！\nさいこうに　かっこいいー！$"
	.if (. - gText_Rom_25281D) > 0x12
	.error "gText_Rom_25281D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25281D) < 0x12
	.space 0x12 - (. - gText_Rom_25281D)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+10 aliases)
	.globl gText_Rom_25282F
gText_Rom_25282F: @ 0x0825282F
	.string "{0xFD}{0x03}！\nさいこうに　うつくしいー！"
	.byte EOS
	.if (. - gText_Rom_25282F) > 0x12
	.error "gText_Rom_25282F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25282F) < 0x12
	.space 0x12 - (. - gText_Rom_25282F)
	.endif
