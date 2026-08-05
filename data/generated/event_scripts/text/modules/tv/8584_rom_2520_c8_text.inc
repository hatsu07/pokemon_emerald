	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+30 aliases)
	.globl gText_Rom_2520C8
gText_Rom_2520C8: @ 0x082520C8
	.string "タイヤを　じーっと　みつめています！\pこの　タイヤで　はしる　くるまの　ことでも\nかんがえている　のでしょうか？$"
	.if (. - gText_Rom_2520C8) > 0x39
	.error "gText_Rom_2520C8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2520C8) < 0x39
	.space 0x39 - (. - gText_Rom_2520C8)
	.endif
