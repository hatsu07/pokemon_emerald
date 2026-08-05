	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+2 aliases)
	.globl gText_Rom_24DADE
gText_Rom_24DADE: @ 0x0824DADE
	.string "このおはなしは　「{0xFD}{0x04}」という\nぶぶんが　とても　いんしょうてき　ですね$"
	.if (. - gText_Rom_24DADE) > 0x25
	.error "gText_Rom_24DADE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24DADE) < 0x25
	.space 0x25 - (. - gText_Rom_24DADE)
	.endif
