	@ src/pokemon_summary_screen.c:782 sStatsLeftColumnLayout
	.globl gText_Rom_5ED2D2
gText_Rom_5ED2D2: @ 0x085ED2D2
	.string "{DYNAMIC 0}/{DYNAMIC 1}\n{DYNAMIC 2}\n{DYNAMIC 3}$"
	.if (. - gText_Rom_5ED2D2) > 0xc
	.error "gText_Rom_5ED2D2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ED2D2) < 0xc
	.space 0xc - (. - gText_Rom_5ED2D2)
	.endif
