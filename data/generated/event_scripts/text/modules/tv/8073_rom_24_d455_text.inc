	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+3 aliases)
	.globl gText_Rom_24D455
gText_Rom_24D455: @ 0x0824D455
	.string "さて　{0xFD}{0x02}さんの　だいすきな\n{0xFD}{0x03}を　なにかに　たとえると　したら\l……\p「{0xFD}{0x04}！！」\pんー　すごい　はっそうだ！！\pはげしい　{0xFD}{0x03}への　おもいこみが\nかんじられるねー！$"
	.if (. - gText_Rom_24D455) > 0x56
	.error "gText_Rom_24D455 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24D455) < 0x56
	.space 0x56 - (. - gText_Rom_24D455)
	.endif
