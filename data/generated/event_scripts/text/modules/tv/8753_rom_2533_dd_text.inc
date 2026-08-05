	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+32 aliases)
	.globl gText_Rom_2533DD
gText_Rom_2533DD: @ 0x082533DD
	.string "『トレーナーを　もとめて』\pマリ『はーい　わたしは　いま\n{0xFD}{0x02}に　きています！\pきょうは　ここで　あたらしい　さいのうを\nはっくつ　しようと　おもいます！\pきょう　わたしが　ちゅうもく　した\nトレーナーは　{0xFD}{0x01}さん！\pわたしは　この　トレーナーに\nなにかを　かんじます！"
	.byte EOS
	.if (. - gText_Rom_2533DD) > 0x88
	.error "gText_Rom_2533DD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2533DD) < 0x88
	.space 0x88 - (. - gText_Rom_2533DD)
	.endif
