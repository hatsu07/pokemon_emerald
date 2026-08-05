	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+7 aliases)
	.globl gText_Rom_24C8E3
gText_Rom_24C8E3: @ 0x0824C8E3
	.string "ところで　{0xFD}{0x02}さんの　めざしてる\n{0xFD}{0x03}って　いったい　なんだろう？\lきいて　みたいねー！\pもちろん　きいて　きました！\pそれは　つぎの　ひとことに\nすべてが　つまって　います！\pそれは　「{0xFD}{0x04}！」\pそれこそ　{0xFD}{0x02}さんの\n{0xFD}{0x03}の　すべて　なんです！$"
	.if (. - gText_Rom_24C8E3) > 0x7c
	.error "gText_Rom_24C8E3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C8E3) < 0x7c
	.space 0x7c - (. - gText_Rom_24C8E3)
	.endif
