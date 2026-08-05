	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+10 aliases)
	.globl gText_Rom_25276B
gText_Rom_25276B: @ 0x0825276B
	.string "かんきゃく『{0xFD}{0x03}の\nあの　コンボでの　アピール！\lああ　もう　ウットリ……$"
	.if (. - gText_Rom_25276B) > 0x26
	.error "gText_Rom_25276B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25276B) < 0x26
	.space 0x26 - (. - gText_Rom_25276B)
	.endif
