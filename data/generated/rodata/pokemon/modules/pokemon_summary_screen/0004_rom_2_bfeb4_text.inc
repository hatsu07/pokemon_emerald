	@ src/pokemon_summary_screen.c:3875 sTextNatureNeutral
	.globl gText_Rom_2BFEB4
gText_Rom_2BFEB4: @ 0x082BFEB4
	.string "{COLOR}{01}$"
	.if (. - gText_Rom_2BFEB4) > 0x4
	.error "gText_Rom_2BFEB4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2BFEB4) < 0x4
	.space 0x4 - (. - gText_Rom_2BFEB4)
	.endif
