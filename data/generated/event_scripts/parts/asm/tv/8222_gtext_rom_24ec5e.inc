	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+5 aliases)
	.globl gText_Rom_24EC5E
gText_Rom_24EC5E: @ 0x0824EC5E
	.string "おねえさん『{0xFD}{0x02}さんは\n{0xFD}{0x03}に　「{0xFD}{0x04}」って\pニックネームを　つけて　たいせつに\nそだてて　るんだって！$"
	.if (. - gText_Rom_24EC5E) > 0x35
	.error "gText_Rom_24EC5E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24EC5E) < 0x35
	.space 0x35 - (. - gText_Rom_24EC5E)
	.endif
