	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+10 aliases)
	.globl gText_Rom_252996
gText_Rom_252996: @ 0x08252996
	.string "きんちょうして　2じしんさで　1かいも\nアピールが　できませんでした\pつぎは　1かい　だけでも　{0xFD}{0x02}の\nアピールを　みたいものです"
	.byte EOS
	.if (. - gText_Rom_252996) > 0x42
	.error "gText_Rom_252996 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_252996) < 0x42
	.space 0x42 - (. - gText_Rom_252996)
	.endif
