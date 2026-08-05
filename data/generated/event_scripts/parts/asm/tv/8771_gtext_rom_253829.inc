	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+14 aliases)
	.globl gText_Rom_253829
gText_Rom_253829: @ 0x08253829
	.string "『ポケモン　コンテスト　けっか　そくほう』\pしかい『みなさん　きょうしゅく　です！\pほんじつは　{0xFD}{0x02}さ　コンテストが\nしゅうりょうした　ばかりの　こちらの\lかいじょう　から　おおくり　します！\pかんきゃく『？ーーー！！\pしかい『おおっと　どうやら\nコンテスト　さんかしゃ　たちが\lこちらに　むかって　くるようですっ！\pわたくし　さっそく　とつげき　しゅざいを\nおこないたいと　おもいます！\pかんきゃく『？ーーー！！　？ーーー！！"
	.byte EOS
	.if (. - gText_Rom_253829) > 0xd7
	.error "gText_Rom_253829 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_253829) < 0xd7
	.space 0xd7 - (. - gText_Rom_253829)
	.endif
