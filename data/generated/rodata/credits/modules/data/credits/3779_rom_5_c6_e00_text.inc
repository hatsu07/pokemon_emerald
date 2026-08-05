	@ src/data/credits.h:96 sCreditsText_TaskManagers
	.globl gText_Rom_5C6E00
gText_Rom_5C6E00: @ 0x085C6E00
	.string "ファンクション マネージャー$"
	.if (. - gText_Rom_5C6E00) > 0xf
	.error "gText_Rom_5C6E00 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6E00) < 0xf
	.space 0xf - (. - gText_Rom_5C6E00)
	.endif
