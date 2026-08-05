	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+32 aliases)
	.globl gText_Rom_25365E
gText_Rom_25365E: @ 0x0825365E
	.string "トレーナーと　たたかって　いるときは\nモンスターボールを　なげるな！\lという　ことです\p{0xFD}{0x01}さん　しょうぶは　つよいのに\nきほんが　なって　ませんよ！\pもう　テレビを　みてる　みんな！\p{0xFD}{0x01}さんに　あったら\nちゅういして　やってね！"
	.byte EOS
	.if (. - gText_Rom_25365E) > 0x75
	.error "gText_Rom_25365E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25365E) < 0x75
	.space 0x75 - (. - gText_Rom_25365E)
	.endif
