	@ src/data/credits.h:187 sCreditsText_RuiKawaguchi
	.globl gText_Rom_5C7137
gText_Rom_5C7137: @ 0x085C7137
	.string "かわぐち るい$"
	.if (. - gText_Rom_5C7137) > 0x8
	.error "gText_Rom_5C7137 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C7137) < 0x8
	.space 0x8 - (. - gText_Rom_5C7137)
	.endif
