	@ src/data/credits.h:75 sCreditsText_Programmers
	.globl gText_Rom_5C6D22
gText_Rom_5C6D22: @ 0x085C6D22
	.string "プログラム$"
	.if (. - gText_Rom_5C6D22) > 0x6
	.error "gText_Rom_5C6D22 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6D22) < 0x6
	.space 0x6 - (. - gText_Rom_5C6D22)
	.endif
