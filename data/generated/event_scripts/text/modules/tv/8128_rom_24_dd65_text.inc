	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+8 aliases)
	.globl gText_Rom_24DD65
gText_Rom_24DD65: @ 0x0824DD65
	.string "ゴクリン『グビィ！　グビィ！\pしかい『うーん……　ちょっと　{0xFD}{0x02}すぎて\n「{0xFD}{0x03}！」と　いってますね……\pやっぱり　{0xFD}{0x04}さんの　しっぱいが\nいたかった　ですね……$"
	.if (. - gText_Rom_24DD65) > 0x51
	.error "gText_Rom_24DD65 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24DD65) < 0x51
	.space 0x51 - (. - gText_Rom_24DD65)
	.endif
