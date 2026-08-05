	@ src/data/credits.h:113 sCreditsText_YoshinoriMatsuda
	.globl gText_Rom_5C6EA9
gText_Rom_5C6EA9: @ 0x085C6EA9
	.string "まつだ よしのり$"
	.if (. - gText_Rom_5C6EA9) > 0x9
	.error "gText_Rom_5C6EA9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6EA9) < 0x9
	.space 0x9 - (. - gText_Rom_5C6EA9)
	.endif
