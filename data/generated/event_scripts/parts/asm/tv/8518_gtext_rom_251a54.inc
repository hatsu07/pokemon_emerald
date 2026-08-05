	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+30 aliases)
	.globl gText_Rom_251A54
gText_Rom_251A54: @ 0x08251A54
	.string "……と　いうような　かんじで\n{0xFD}{0x03}さんは\l{0xFD}{0x02}さんの　きちを\l{0xFD}{0x04}ほ　あるいて　かえりました$"
	.if (. - gText_Rom_251A54) > 0x2f
	.error "gText_Rom_251A54 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_251A54) < 0x2f
	.space 0x2f - (. - gText_Rom_251A54)
	.endif
