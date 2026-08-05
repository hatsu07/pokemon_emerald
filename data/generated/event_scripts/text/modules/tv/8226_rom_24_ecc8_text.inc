	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+5 aliases)
	.globl gText_Rom_24ECC8
gText_Rom_24ECC8: @ 0x0824ECC8
	.string "おねえさん『そんなに　かんたんに\nつかまえる　なんて\p{0xFD}{0x02}さんと　{0xFD}{0x03}の\nであいは　きっと　うんめい　だったのよ！$"
	.if (. - gText_Rom_24ECC8) > 0x3a
	.error "gText_Rom_24ECC8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24ECC8) < 0x3a
	.space 0x3a - (. - gText_Rom_24ECC8)
	.endif
