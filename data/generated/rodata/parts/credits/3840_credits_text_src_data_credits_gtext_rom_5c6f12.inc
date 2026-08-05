	@ src/data/credits.h:125 sCreditsText_TakaoUnno
	.globl gText_Rom_5C6F12
gText_Rom_5C6F12: @ 0x085C6F12
	.string "うんの たかお$"
	.if (. - gText_Rom_5C6F12) > 0x8
	.error "gText_Rom_5C6F12 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6F12) < 0x8
	.space 0x8 - (. - gText_Rom_5C6F12)
	.endif
