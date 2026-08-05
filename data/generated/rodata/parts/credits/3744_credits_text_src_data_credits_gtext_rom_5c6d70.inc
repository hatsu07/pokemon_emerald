	@ src/data/credits.h:82 sCreditsText_ScenarioPlot
	.globl gText_Rom_5C6D70
gText_Rom_5C6D70: @ 0x085C6D70
	.string "シナリオプロット$"
	.if (. - gText_Rom_5C6D70) > 0x9
	.error "gText_Rom_5C6D70 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6D70) < 0x9
	.space 0x9 - (. - gText_Rom_5C6D70)
	.endif
