	@ src/pokemon_summary_screen.c:781 sMemoMiscTextColor
	.globl gText_Rom_5ED2CB
gText_Rom_5ED2CB: @ 0x085ED2CB
	.string "{COLOR WHITE}{SHADOW DARK_GRAY}$"
	.if (. - gText_Rom_5ED2CB) > 0x7
	.error "gText_Rom_5ED2CB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ED2CB) < 0x7
	.space 0x7 - (. - gText_Rom_5ED2CB)
	.endif
