	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+27 aliases)
	.globl gText_Rom_250C96
gText_Rom_250C96: @ 0x08250C96
	.string "{0xFD}{0x03}は　なんと！\nリボンを　{0xFD}{0x04}こ　つけている　ざますよ\p{0xFD}{0x02}さんの　あいを\nかんじる　ざますねー$"
	.if (. - gText_Rom_250C96) > 0x32
	.error "gText_Rom_250C96 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_250C96) < 0x32
	.space 0x32 - (. - gText_Rom_250C96)
	.endif
