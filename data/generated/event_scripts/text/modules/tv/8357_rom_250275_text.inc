	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+23 aliases)
	.globl gText_Rom_250275
gText_Rom_250275: @ 0x08250275
	.string "おおー！\pこんな　ところに　「{0xFD}{0x03}」が！\nすばらしい　ですねー$"
	.if (. - gText_Rom_250275) > 0x20
	.error "gText_Rom_250275 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_250275) < 0x20
	.space 0x20 - (. - gText_Rom_250275)
	.endif
