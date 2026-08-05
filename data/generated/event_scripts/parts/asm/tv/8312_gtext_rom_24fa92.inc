	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+19 aliases)
	.globl gText_Rom_24FA92
gText_Rom_24FA92: @ 0x0824FA92
	.string "しかい『……えーと　……はい！　ということで\n{0xFD}{0x02}　{0xFD}{0x03}　は……\lムロタウンで　はやらなかった！\p……いじょうを　おつたえしました\pろうじん『{0xFD}{0x02}　{0xFD}{0x03}$"
	.if (. - gText_Rom_24FA92) > 0x4d
	.error "gText_Rom_24FA92 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24FA92) < 0x4d
	.space 0x4d - (. - gText_Rom_24FA92)
	.endif
