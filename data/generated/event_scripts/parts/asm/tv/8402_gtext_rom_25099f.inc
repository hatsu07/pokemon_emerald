	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+26 aliases)
	.globl gText_Rom_25099F
gText_Rom_25099F: @ 0x0825099F
	.string "ファン『モンスターボールを　なげる　しぐさが\nかっこいい　ところ！！$"
	.if (. - gText_Rom_25099F) > 0x23
	.error "gText_Rom_25099F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25099F) < 0x23
	.space 0x23 - (. - gText_Rom_25099F)
	.endif
