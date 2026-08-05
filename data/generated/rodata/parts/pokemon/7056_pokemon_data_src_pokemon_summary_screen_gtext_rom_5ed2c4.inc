	@ src/pokemon_summary_screen.c:780 sMemoNatureTextColor
	.globl gText_Rom_5ED2C4
gText_Rom_5ED2C4: @ 0x085ED2C4
	.string "{COLOR LIGHT_RED}{SHADOW GREEN}$"
	.if (. - gText_Rom_5ED2C4) > 0x7
	.error "gText_Rom_5ED2C4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ED2C4) < 0x7
	.space 0x7 - (. - gText_Rom_5ED2C4)
	.endif
