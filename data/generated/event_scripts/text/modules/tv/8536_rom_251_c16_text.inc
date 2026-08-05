	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+30 aliases)
	.globl gText_Rom_251C16
gText_Rom_251C16: @ 0x08251C16
	.string "テントに　はいったー！\pはしりまわって　います！\pあばれまわって　います！\pテントの　おおきさに\nびっくり　しています！！$"
	.if (. - gText_Rom_251C16) > 0x3e
	.error "gText_Rom_251C16 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_251C16) < 0x3e
	.space 0x3e - (. - gText_Rom_251C16)
	.endif
