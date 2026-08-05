	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+32 aliases)
	.globl gText_Rom_2534BA
gText_Rom_2534BA: @ 0x082534BA
	.string "さて　トレーナーの　じつりょくを\nみるには…\pたたかって　みるのが　いちばん　はやい！\nさっそく　ちょうさを　かいし　します！\p……\pと　いうわけで\nたたかって　みたの　ですが\pみごとに　ボコボコに　されました！\n{0xFD}{0x01}さん　やたら　つよいですね……\pで　たたかった　かんそうを\nいわせて　もらいますと"
	.byte EOS
	.if (. - gText_Rom_2534BA) > 0x97
	.error "gText_Rom_2534BA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2534BA) < 0x97
	.space 0x97 - (. - gText_Rom_2534BA)
	.endif
