	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+30 aliases)
	.globl gText_Rom_251F83
gText_Rom_251F83: @ 0x08251F83
	.string "すなのおきものに　てを　ふれて……\pあっ！\pこわしちゃいましたー！\pかおが　すこし　ひきつっています$"
	.if (. - gText_Rom_251F83) > 0x33
	.error "gText_Rom_251F83 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_251F83) < 0x33
	.space 0x33 - (. - gText_Rom_251F83)
	.endif
