	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+15 aliases)
	.globl gText_Rom_24E997
gText_Rom_24E997: @ 0x0824E997
	.string "あ！\n{0xFD}{0x02}さん　といえば……\pおねえさん　このまえ\nぼく　みちゃった！！\pおねえさん『みちゃった　って\nなにを　みちゃったの？\pおにいさん『このまえ\n{0xFD}{0x03}に　でかけたとき\l{0xFD}{0x02}さんを　みかけたんだ\pちょうど　{0xFD}{0x04}を　つかまえてる\nところ　だったん　だけど……$"
	.if (. - gText_Rom_24E997) > 0x82
	.error "gText_Rom_24E997 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24E997) < 0x82
	.space 0x82 - (. - gText_Rom_24E997)
	.endif
