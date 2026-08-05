	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+3 aliases)
	.globl gText_Rom_24D4AB
gText_Rom_24D4AB: @ 0x0824D4AB
	.string "さて　{0xFD}{0x02}さんが　{0xFD}{0x03}に\nひかれた　りゆうは……\l……\p「{0xFD}{0x04}！！」\pおー！！　すんばらしい　いけんだー！\p{0xFD}{0x03}を　どんなに　すきか\nビンビン　つたわって　くるねー！$"
	.if (. - gText_Rom_24D4AB) > 0x54
	.error "gText_Rom_24D4AB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24D4AB) < 0x54
	.space 0x54 - (. - gText_Rom_24D4AB)
	.endif
