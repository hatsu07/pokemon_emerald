	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+10 aliases)
	.globl gText_Rom_2527FD
gText_Rom_2527FD: @ 0x082527FD
	.string "かんきゃく『{0xFD}{0x03}の　アピールに\nもう　もえつきちゃい　ました！$"
	.if (. - gText_Rom_2527FD) > 0x20
	.error "gText_Rom_2527FD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2527FD) < 0x20
	.space 0x20 - (. - gText_Rom_2527FD)
	.endif
