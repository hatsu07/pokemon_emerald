	@ src/pokemon_summary_screen.c:783 sStatsLeftIVEVColumnLayout (+1 aliases)
	.globl gText_Rom_5ED2DE
gText_Rom_5ED2DE: @ 0x085ED2DE
	.string "{DYNAMIC 0}\n{DYNAMIC 1}\n{DYNAMIC 2}$"
	.if (. - gText_Rom_5ED2DE) > 0x9
	.error "gText_Rom_5ED2DE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ED2DE) < 0x9
	.space 0x9 - (. - gText_Rom_5ED2DE)
	.endif
