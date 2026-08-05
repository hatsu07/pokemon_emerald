	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+9 aliases)
	.globl gText_Rom_24CCCF
gText_Rom_24CCCF: @ 0x0824CCCF
	.string "さいごには　{0xFD}{0x02}さんの\n{0xFD}{0x03}を　みごとに　たおして\lしょうり　したんですねぇ\pいや　{0xFD}{0x02}さんに　かつなんて\nすごいとしか　いいようがないよ　まったく\pさて　そのしょうりを　つかんだ\nしゅんかんの　かんそうを　きいたところ$"
	.if (. - gText_Rom_24CCCF) > 0x6f
	.error "gText_Rom_24CCCF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24CCCF) < 0x6f
	.space 0x6f - (. - gText_Rom_24CCCF)
	.endif
