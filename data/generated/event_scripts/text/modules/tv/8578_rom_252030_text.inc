	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+30 aliases)
	.globl gText_Rom_252030
gText_Rom_252030: @ 0x08252030
	.string "じょうぶないたの　うえを　あるいています！\pちょっと　したを　きにしています\pいがいに　きが　ちっちゃいですねー$"
	.if (. - gText_Rom_252030) > 0x39
	.error "gText_Rom_252030 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_252030) < 0x39
	.space 0x39 - (. - gText_Rom_252030)
	.endif
