	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+26 aliases)
	.globl gText_Rom_250A35
gText_Rom_250A35: @ 0x08250A35
	.string "ファン『じてんしゃを　あやつる\nテクニックが　すごい　ところ！！$"
	.if (. - gText_Rom_250A35) > 0x21
	.error "gText_Rom_250A35 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_250A35) < 0x21
	.space 0x21 - (. - gText_Rom_250A35)
	.endif
