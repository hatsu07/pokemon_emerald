	@ src/data/credits.h:136 sCreditsText_HitomiSato
	.globl gText_Rom_5C6F6D
gText_Rom_5C6F6D: @ 0x085C6F6D
	.string "さとう ひとみ$"
	.if (. - gText_Rom_5C6F6D) > 0x8
	.error "gText_Rom_5C6F6D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6F6D) < 0x8
	.space 0x8 - (. - gText_Rom_5C6F6D)
	.endif
