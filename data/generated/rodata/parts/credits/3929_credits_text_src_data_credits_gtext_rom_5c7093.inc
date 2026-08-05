	@ src/data/credits.h:169 sCreditsText_TakanaoKondo
	.globl gText_Rom_5C7093
gText_Rom_5C7093: @ 0x085C7093
	.string "こんどう たかなお$"
	.if (. - gText_Rom_5C7093) > 0xa
	.error "gText_Rom_5C7093 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C7093) < 0xa
	.space 0xa - (. - gText_Rom_5C7093)
	.endif
