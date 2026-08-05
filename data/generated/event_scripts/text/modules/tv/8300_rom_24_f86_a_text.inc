	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+19 aliases)
	.globl gText_Rom_24F86A
gText_Rom_24F86A: @ 0x0824F86A
	.string "『ムロタウン\n　りゅうこう　じょうほうきょく』\pしかい『さあ　きょうも　ムロタウンの\nりゅうこうを　いちはやく　おとどけします\pゲストは　ムロタウン　いち\nものしり　という　この　おじいさんです！\pろうじん『……ふむ　よろしくじゃ\pしかい『さっそく　ですが　ムロタウンで\nいま　はやっている　ことと　いえば……\pろうじん『{0xFD}{0x02}　{0xFD}{0x03}\pしかい『{0xFD}{0x02}　{0xFD}{0x03}\n……ですか？\pろうじん『……いいや！\n{0xFD}{0x02}　{0xFD}{0x03}　は\lまったく　はやらんかった　のじゃ……\lこの　はなし　ききたいか　のう……？\pしかい『いや　いまの　りゅうこうを……$"
	.if (. - gText_Rom_24F86A) > 0x106
	.error "gText_Rom_24F86A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24F86A) < 0x106
	.space 0x106 - (. - gText_Rom_24F86A)
	.endif
