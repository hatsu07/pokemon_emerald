	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+1 aliases)
	.globl gText_Rom_24D6F0
gText_Rom_24D6F0: @ 0x0824D6F0
	.string "いい　てがみは\nなんど　きいても　いいねー！！$"
	.if (. - gText_Rom_24D6F0) > 0x18
	.error "gText_Rom_24D6F0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24D6F0) < 0x18
	.space 0x18 - (. - gText_Rom_24D6F0)
	.endif
