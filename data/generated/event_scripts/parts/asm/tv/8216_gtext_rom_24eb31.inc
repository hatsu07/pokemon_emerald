	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+15 aliases)
	.globl gText_Rom_24EB31
gText_Rom_24EB31: @ 0x0824EB31
	.string "おねえさん『プッ！\pおにいさん『あ！　いま\nわらったでしょ！？\pおねえさん『え！？\pわらってない\nわらってないよ！\pあぁ　{0xFD}{0x02}さん\nとっても　かわいそう……\pおにいさん『……$"
	.if (. - gText_Rom_24EB31) > 0x58
	.error "gText_Rom_24EB31 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24EB31) < 0x58
	.space 0x58 - (. - gText_Rom_24EB31)
	.endif
