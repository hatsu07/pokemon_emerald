	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+27 aliases)
	.globl gText_Rom_250C08
gText_Rom_250C08: @ 0x08250C08
	.string "『ステキに　はっけん！\n　リボンを　つけた　ポケモンちゃん！！』\p……はぁー\pポケモンちゃんに　リボンって\nほんと　ステキ　ざますねー\pきょうも　まちで　みかけた\nステキな　ポケモンちゃんを\lみなさまに　ごしょうかい　するざます\pきょうの　ポケモンちゃんは\n{0xFD}{0x02}さんの　{0xFD}{0x03}　ざます$"
	.if (. - gText_Rom_250C08) > 0x8e
	.error "gText_Rom_250C08 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_250C08) < 0x8e
	.space 0x8e - (. - gText_Rom_250C08)
	.endif
