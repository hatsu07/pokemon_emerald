	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+22 aliases)
	.globl gText_Rom_250080
gText_Rom_250080: @ 0x08250080
	.string "しかし……\pレア　{0xFD}{0x03}に　おどろいて\nこんらんした　{0xFD}{0x02}さんは\lわけも　わからないまま\l{0xFD}{0x04}に　めいれいを　してしまい\lきが　つくと　たおしていた　のです……$"
	.if (. - gText_Rom_250080) > 0x50
	.error "gText_Rom_250080 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_250080) < 0x50
	.space 0x50 - (. - gText_Rom_250080)
	.endif
