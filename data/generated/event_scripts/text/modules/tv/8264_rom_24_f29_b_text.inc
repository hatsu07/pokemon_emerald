	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+6 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24F29B
gText_Rom_24F29B: @ 0x0824F29B
	.string "てんいん『{0xFD}{0x02}さんは　ほんとうに\nだいじな　おきゃくさま　ですよ$"
	.if (. - gText_Rom_24F29B) != 0x21
	.error "gText_Rom_24F29B must retain its original byte length"
	.endif
