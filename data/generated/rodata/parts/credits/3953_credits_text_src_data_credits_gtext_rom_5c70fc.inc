	@ src/data/credits.h:181 sCreditsText_SatoshiMitsuhara
	.globl gText_Rom_5C70FC
gText_Rom_5C70FC: @ 0x085C70FC
	.string "みつはら さとし$"
	.if (. - gText_Rom_5C70FC) > 0x9
	.error "gText_Rom_5C70FC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C70FC) < 0x9
	.space 0x9 - (. - gText_Rom_5C70FC)
	.endif
