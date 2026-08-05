	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+1 aliases)
	.globl gText_Rom_24D6C9
gText_Rom_24D6C9: @ 0x0824D6C9
	.string "おー！！\nなんて　すばらしい　てがみなんだ！！$"
	.if (. - gText_Rom_24D6C9) > 0x18
	.error "gText_Rom_24D6C9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24D6C9) < 0x18
	.space 0x18 - (. - gText_Rom_24D6C9)
	.endif
