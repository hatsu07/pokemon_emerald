	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+30 aliases)
	.globl gText_Rom_251A83
gText_Rom_251A83: @ 0x08251A83
	.string "……うーん\pどうやら　{0xFD}{0x03}さんは\n{0xFD}{0x02}さんの　ひみつきちに\lきょうみが　わかなかった　ようですね……$"
	.if (. - gText_Rom_251A83) > 0x33
	.error "gText_Rom_251A83 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_251A83) < 0x33
	.space 0x33 - (. - gText_Rom_251A83)
	.endif
