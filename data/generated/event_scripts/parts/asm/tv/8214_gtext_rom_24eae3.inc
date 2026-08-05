	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+15 aliases)
	.globl gText_Rom_24EAE3
gText_Rom_24EAE3: @ 0x0824EAE3
	.string "おねえさん『こらこらっ！\nたにんの　ふこうを　わらっちゃ　だめだよ\pあぁ　{0xFD}{0x02}さん\nとっても　かわいそう……\pおにいさん『はーい！\nわらって　すいませーん$"
	.if (. - gText_Rom_24EAE3) > 0x4e
	.error "gText_Rom_24EAE3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24EAE3) < 0x4e
	.space 0x4e - (. - gText_Rom_24EAE3)
	.endif
