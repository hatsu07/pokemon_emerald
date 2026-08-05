	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+10 aliases)
	.globl gText_Rom_25273B
gText_Rom_25273B: @ 0x0825273B
	.string "かんきゃく『{0xFD}{0x03}の　アピールで\nおもわず　ボクも　おどろいちゃった！\p{0xFD}{0x03}！　きみは　スゴイ！$"
	.if (. - gText_Rom_25273B) > 0x30
	.error "gText_Rom_25273B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25273B) < 0x30
	.space 0x30 - (. - gText_Rom_25273B)
	.endif
