	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+9 aliases)
	.globl gText_Rom_24CD3E
gText_Rom_24CD3E: @ 0x0824CD3E
	.string "しかし　さいごに　とうじょうした\n{0xFD}{0x02}さんの　{0xFD}{0x03}に\lついに　まけて　しまったんですねぇ\pまあ　「{0xFD}{0x02}の　{0xFD}{0x03}」\nといえば　ゆうめいな　コンビ　ですからね\p……さて　その　ゆうめいじんとの\nしょうぶの　かんそうを　きいたところ$"
	.if (. - gText_Rom_24CD3E) > 0x72
	.error "gText_Rom_24CD3E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24CD3E) < 0x72
	.space 0x72 - (. - gText_Rom_24CD3E)
	.endif
