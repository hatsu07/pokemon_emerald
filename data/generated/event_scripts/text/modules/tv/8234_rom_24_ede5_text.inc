	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+5 aliases)
	.globl gText_Rom_24EDE5
gText_Rom_24EDE5: @ 0x0824EDE5
	.string "わたしなら　{0xFD}{0x04}　とかに\nそのニックネームを　つけちゃう　けどね！\pおにいさん『おー！\nそれ　なかなか　あたらしいかも！$"
	.if (. - gText_Rom_24EDE5) > 0x3d
	.error "gText_Rom_24EDE5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24EDE5) < 0x3d
	.space 0x3d - (. - gText_Rom_24EDE5)
	.endif
