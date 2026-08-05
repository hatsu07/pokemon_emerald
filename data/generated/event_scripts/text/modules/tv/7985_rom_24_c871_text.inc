	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+7 aliases)
	.globl gText_Rom_24C871
gText_Rom_24C871: @ 0x0824C871
	.string "コンテストを　したあとの\nかんそうを　きくと\lびみょうに　くやしがり　ながら\p「{0xFD}{0x03}」って\nこたえて　くれたぞ！\pまあ　コンテストでは\n{0xFD}{0x04}ばん　でした　からねー！\pこの　ことばに　{0xFD}{0x02}さんの\nくやしさが　みえかくれ　するねー$"
	.if (. - gText_Rom_24C871) > 0x72
	.error "gText_Rom_24C871 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C871) < 0x72
	.space 0x72 - (. - gText_Rom_24C871)
	.endif
