	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+5 aliases)
	.globl gText_Rom_24EE22
gText_Rom_24EE22: @ 0x0824EE22
	.string "「{0xFD}{0x03}」かー\nまさに　{0xFD}{0x02}って　かんじよね！\pほら！　もじの　ふんいきとか　なんとなく\n{0xFD}{0x02}って　かんじが　するもの！\pおにいさん『……そうだね$"
	.if (. - gText_Rom_24EE22) > 0x49
	.error "gText_Rom_24EE22 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24EE22) < 0x49
	.space 0x49 - (. - gText_Rom_24EE22)
	.endif
