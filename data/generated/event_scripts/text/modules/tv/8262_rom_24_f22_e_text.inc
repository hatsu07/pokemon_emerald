	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+6 aliases)
	.globl gText_Rom_24F22E
gText_Rom_24F22E: @ 0x0824F22E
	.string "インタビュアー『うーん……\n{0xFD}{0x02}さんって　かなりの\lかいものじょうず　なのかも　しれませんね！\pこれで　ごうけいは……\p{0xFD}{0x03}えん！？\nさすが　ですね！\pおっと　それでは　またじかいの\nほうそうで　おあい　しましょう！$"
	.if (. - gText_Rom_24F22E) > 0x6d
	.error "gText_Rom_24F22E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24F22E) < 0x6d
	.space 0x6d - (. - gText_Rom_24F22E)
	.endif
