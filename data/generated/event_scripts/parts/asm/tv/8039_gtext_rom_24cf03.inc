	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+9 aliases)
	.globl gText_Rom_24CF03
gText_Rom_24CF03: @ 0x0824CF03
	.string "「{0xFD}{0x02}！」\nなるほどねぇ\pたしかに　{0xFD}{0x04}さんとの　たたかいは\n「{0xFD}{0x02}」　としか　いいようがない\lたたかい　でしたからねぇ\p{0xFD}{0x03}さんの　くやしさが\nよく　つたわってくるよ！　くー！$"
	.if (. - gText_Rom_24CF03) > 0x5a
	.error "gText_Rom_24CF03 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24CF03) < 0x5a
	.space 0x5a - (. - gText_Rom_24CF03)
	.endif
