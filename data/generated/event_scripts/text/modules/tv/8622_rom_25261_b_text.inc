	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+10 aliases)
	.globl gText_Rom_25261B
gText_Rom_25261B: @ 0x0825261B
	.string "かんきゃく『1じ　しんさも　2じ　しんさも\nだんとつで　1ばん　でしたー！\l{0xFD}{0x03}　つぎも　ゆうしょうだー！$"
	.if (. - gText_Rom_25261B) > 0x36
	.error "gText_Rom_25261B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25261B) < 0x36
	.space 0x36 - (. - gText_Rom_25261B)
	.endif
