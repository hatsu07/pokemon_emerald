	@ src/data/credits.h:158 sCreditsText_NaokoYanase
	.globl gText_Rom_5C7030
gText_Rom_5C7030: @ 0x085C7030
	.string "やなせ なおこ$"
	.if (. - gText_Rom_5C7030) > 0x8
	.error "gText_Rom_5C7030 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C7030) < 0x8
	.space 0x8 - (. - gText_Rom_5C7030)
	.endif
