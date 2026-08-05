	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+3 aliases)
	.globl gText_Rom_24D3F6
gText_Rom_24D3F6: @ 0x0824D3F6
	.string "さて　{0xFD}{0x02}さんが　はじめて\n{0xFD}{0x03}と　あったとき　ちょっかんてきに\lおもった　ことは……\l……\p「{0xFD}{0x04}！！」\pんー　いい　さけびだ！\pまるで　そのときの　おもいでが\nよみがえる　ようだー！！$"
	.if (. - gText_Rom_24D3F6) > 0x5f
	.error "gText_Rom_24D3F6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24D3F6) < 0x5f
	.space 0x5f - (. - gText_Rom_24D3F6)
	.endif
