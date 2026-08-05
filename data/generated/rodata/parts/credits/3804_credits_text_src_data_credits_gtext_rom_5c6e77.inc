	@ src/data/credits.h:107 sCreditsText_ShigekiMorimoto
	.globl gText_Rom_5C6E77
gText_Rom_5C6E77: @ 0x085C6E77
	.string "もりもと しげき$"
	.if (. - gText_Rom_5C6E77) > 0x9
	.error "gText_Rom_5C6E77 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6E77) < 0x9
	.space 0x9 - (. - gText_Rom_5C6E77)
	.endif
