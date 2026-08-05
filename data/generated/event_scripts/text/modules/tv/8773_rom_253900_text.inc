	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+14 aliases)
	.globl gText_Rom_253900
gText_Rom_253900: @ 0x08253900
	.string "しかい『きょうしゅく　です！\pゆうしょう　おめでとう　ございます！\nこんかいの　きめてに　なったのは\lどんな　ところ　なので　しょうか？\pおねえさん『あたしも　{0xFD}{0x03}も\nとっても　がんばりました！\pだけど　きっと　コンテストに　でるまでに\nきょうりょくして　くれた　ひとたちの\lおかげだと　おもいますっ！\pしかい『では　この　よろこびを\nいちばん　つたえたい　かたに　むけて\lひとこと　メッセージを　おねがい　します！\pおねえさん『おーいっ！\p{0xFD}{0x04}さーん！　みてるーっ！？\nあたしたち　やったよーっ！\lどうも　ありがとーっ！"
	.byte EOS
	.if (. - gText_Rom_253900) > 0x106
	.error "gText_Rom_253900 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_253900) < 0x106
	.space 0x106 - (. - gText_Rom_253900)
	.endif
