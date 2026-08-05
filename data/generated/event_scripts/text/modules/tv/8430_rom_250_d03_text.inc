	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+27 aliases)
	.globl gText_Rom_250D03
gText_Rom_250D03: @ 0x08250D03
	.string "{0xFD}{0x03}は　すごい　ざます！\nリボンを　{0xFD}{0x04}こも　つけている　ざますよ\p{0xFD}{0x02}さんの　コレクターだましいを\nかんじる　ざますねー$"
	.if (. - gText_Rom_250D03) > 0x3e
	.error "gText_Rom_250D03 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_250D03) < 0x3e
	.space 0x3e - (. - gText_Rom_250D03)
	.endif
