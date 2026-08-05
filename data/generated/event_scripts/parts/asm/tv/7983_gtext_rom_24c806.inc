	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+7 aliases)
	.globl gText_Rom_24C806
gText_Rom_24C806: @ 0x0824C806
	.string "コンテストを　したあとの\nかんそうを　きくと\lすごく　うれしそうに\p「{0xFD}{0x03}」って\nこたえて　くれたぞ！\pまあ　コンテストでは\n{0xFD}{0x04}ばん　でした　からねー！\pいまの　{0xFD}{0x02}さんには\nぴったりの　セリフだよ　まったく！$"
	.if (. - gText_Rom_24C806) > 0x6b
	.error "gText_Rom_24C806 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C806) < 0x6b
	.space 0x6b - (. - gText_Rom_24C806)
	.endif
