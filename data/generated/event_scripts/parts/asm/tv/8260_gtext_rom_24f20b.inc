	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+6 aliases)
	.globl gText_Rom_24F20B
gText_Rom_24F20B: @ 0x0824F20B
	.string "てんいん『しかも　おおやすうりの　とき\nですから　さすが　ですよね！$"
	.if (. - gText_Rom_24F20B) > 0x23
	.error "gText_Rom_24F20B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24F20B) < 0x23
	.space 0x23 - (. - gText_Rom_24F20B)
	.endif
