	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+10 aliases)
	.globl gText_Rom_2528B7
gText_Rom_2528B7: @ 0x082528B7
	.string "かんきゃく『{0xFD}{0x03}が　ほかの\nポケモンの　アピールに　おどろいた　ときは\lもう　なきそうに　なっちゃいました！\p{0xFD}{0x03}\nがんばったねー！　えらい！"
	.byte EOS
	.if (. - gText_Rom_2528B7) > 0x48
	.error "gText_Rom_2528B7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2528B7) < 0x48
	.space 0x48 - (. - gText_Rom_2528B7)
	.endif
