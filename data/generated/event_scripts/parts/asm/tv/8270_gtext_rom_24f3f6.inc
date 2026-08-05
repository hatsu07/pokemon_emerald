	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+6 aliases)
	.globl gText_Rom_24F3F6
gText_Rom_24F3F6: @ 0x0824F3F6
	.string "インタビュアー『うーん　すごい　ですね\pでも　なんで　そんなに\nいっぱい　かったので　しょう？\p……\pなぞは　ふかまる　ばかりですが\nじかんの　ようなので\lまたじかい　おあい　しましょう！\pそれに　しても\n{0xFD}{0x02}さんって　なぞだわ……$"
	.if (. - gText_Rom_24F3F6) > 0x75
	.error "gText_Rom_24F3F6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24F3F6) < 0x75
	.space 0x75 - (. - gText_Rom_24F3F6)
	.endif
