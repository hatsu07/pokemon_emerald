	@ src/data/credits.h:185 sCreditsText_DaisukeHoshino
	.globl gText_Rom_5C7124
gText_Rom_5C7124: @ 0x085C7124
	.string "ほしの だいすけ$"
	.if (. - gText_Rom_5C7124) > 0x9
	.error "gText_Rom_5C7124 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C7124) < 0x9
	.space 0x9 - (. - gText_Rom_5C7124)
	.endif
