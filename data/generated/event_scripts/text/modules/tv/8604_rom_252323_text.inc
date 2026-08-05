	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+31 aliases)
	.globl gText_Rom_252323
gText_Rom_252323: @ 0x08252323
	.string "しかも　ポロックを　1こも\nつかって　いないんです！\pいやー　すごい　うで　でしたよ$"
	.if (. - gText_Rom_252323) > 0x2b
	.error "gText_Rom_252323 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_252323) < 0x2b
	.space 0x2b - (. - gText_Rom_252323)
	.endif
