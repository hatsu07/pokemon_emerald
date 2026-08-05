	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+15 aliases)
	.globl gText_Rom_24EA19
gText_Rom_24EA19: @ 0x0824EA19
	.string "とちゅうで　ポケモンに\nにげられ　ちゃったんだよ！！\pボールを　{0xFD}{0x03}こも　なげたのに\nぜんぶ　むだ……\pポケモンに　にげられた　ときの\n{0xFD}{0x02}さんの　くやしがった　かお\lすごかったなぁ……$"
	.if (. - gText_Rom_24EA19) > 0x5e
	.error "gText_Rom_24EA19 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24EA19) < 0x5e
	.space 0x5e - (. - gText_Rom_24EA19)
	.endif
