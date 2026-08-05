	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+10 aliases)
	.globl gText_Rom_2526FE
gText_Rom_2526FE: @ 0x082526FE
	.string "かんきゃく『{0xFD}{0x03}が\nきんちょう　したとき　おもわず\lがんばれー　って　さけんじゃいました\p{0xFD}{0x03}　よかったね　おめでとう！$"
	.if (. - gText_Rom_2526FE) > 0x3d
	.error "gText_Rom_2526FE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2526FE) < 0x3d
	.space 0x3d - (. - gText_Rom_2526FE)
	.endif
