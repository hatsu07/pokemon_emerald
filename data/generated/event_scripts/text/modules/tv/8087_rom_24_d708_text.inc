	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+1 aliases)
	.globl gText_Rom_24D708
gText_Rom_24D708: @ 0x0824D708
	.string "「{0xFD}{0x04}」　っていう　ことばの\nおかげで　グッと　こころに　つたわってくる\lいい　てがみに　なっているねー！！$"
	.if (. - gText_Rom_24D708) > 0x37
	.error "gText_Rom_24D708 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24D708) < 0x37
	.space 0x37 - (. - gText_Rom_24D708)
	.endif
