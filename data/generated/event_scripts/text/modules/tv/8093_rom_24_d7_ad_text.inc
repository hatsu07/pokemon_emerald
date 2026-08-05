	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+1 aliases)
	.globl gText_Rom_24D7AD
gText_Rom_24D7AD: @ 0x0824D7AD
	.string "このてがみ　じぶんてきには\n{0xFD}{0x04}てん　ていう　かんじかなー！\pつぎは　もっと　いい　てがみを\nきたい　してるよ！　{0xFD}{0x02}さん！！\pおっと　もう　こんなじかんだ！\nそれでは　また　じかい\lみなさま　おあい　しましょう！！$"
	.if (. - gText_Rom_24D7AD) > 0x6d
	.error "gText_Rom_24D7AD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24D7AD) < 0x6d
	.space 0x6d - (. - gText_Rom_24D7AD)
	.endif
