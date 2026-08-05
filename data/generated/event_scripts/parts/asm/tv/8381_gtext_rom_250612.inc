	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+23 aliases)
	.globl gText_Rom_250612
gText_Rom_250612: @ 0x08250612
	.string "いやー\nすばらしい　おへや　でしたねー\pみなさんも　いちど　{0xFD}{0x02}さんの\nひみつきちを　ごほうもん　されてみては\lいかが　でしょうか？\pでは　また　じかい　おあいしましょう！\nさようなら！$"
	.if (. - gText_Rom_250612) > 0x5e
	.error "gText_Rom_250612 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_250612) < 0x5e
	.space 0x5e - (. - gText_Rom_250612)
	.endif
