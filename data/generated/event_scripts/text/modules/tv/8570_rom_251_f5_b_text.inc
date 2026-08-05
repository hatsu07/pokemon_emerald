	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+30 aliases)
	.globl gText_Rom_251F5B
gText_Rom_251F5B: @ 0x08251F5B
	.string "くるっとマットに　のったー！\pめが　まわった　ようです！\pクラクラ　しています$"
	.if (. - gText_Rom_251F5B) > 0x28
	.error "gText_Rom_251F5B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_251F5B) < 0x28
	.space 0x28 - (. - gText_Rom_251F5B)
	.endif
