	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+31 aliases)
	.globl gText_Rom_25245F
gText_Rom_25245F: @ 0x0825245F
	.string "1こも　つかってなかった\nポロックを　つかうように　なれば\lよくなると　おもうんですがね……$"
	.if (. - gText_Rom_25245F) > 0x2f
	.error "gText_Rom_25245F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25245F) < 0x2f
	.space 0x2f - (. - gText_Rom_25245F)
	.endif
