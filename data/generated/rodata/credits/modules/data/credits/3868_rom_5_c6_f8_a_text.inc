	@ src/data/credits.h:139 sCreditsText_ShigeruOhmori
	.globl gText_Rom_5C6F8A
gText_Rom_5C6F8A: @ 0x085C6F8A
	.string "おおもり しげる$"
	.if (. - gText_Rom_5C6F8A) > 0x9
	.error "gText_Rom_5C6F8A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6F8A) < 0x9
	.space 0x9 - (. - gText_Rom_5C6F8A)
	.endif
