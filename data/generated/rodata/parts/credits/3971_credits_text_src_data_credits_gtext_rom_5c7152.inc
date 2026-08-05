	@ src/data/credits.h:190 sCreditsText_FujikoNomura
	.globl gText_Rom_5C7152
gText_Rom_5C7152: @ 0x085C7152
	.string "のむら ふじこ$"
	.if (. - gText_Rom_5C7152) > 0x8
	.error "gText_Rom_5C7152 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C7152) < 0x8
	.space 0x8 - (. - gText_Rom_5C7152)
	.endif
