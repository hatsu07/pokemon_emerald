	@ src/strings.c:867 gJPText_CardReadingHasBeenHalted
	.globl gText_Rom_5CCF81
gText_Rom_5CCF81: @ 0x085CCF81
	.string "カードの よみこみを\nちゅうし しました$"
	.if (. - gText_Rom_5CCF81) > 0x15
	.error "gText_Rom_5CCF81 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCF81) < 0x15
	.space 0x15 - (. - gText_Rom_5CCF81)
	.endif
