	@ data/text/berries.inc:31 Route111_Text_WhatColorBerriesToLookForToday
	.globl gText_Rom_2638F0
gText_Rom_2638F0: @ 0x082638F0
	.string "きょうは なにいろの きのみを\nさがそっかなー$"
	.if (. - gText_Rom_2638F0) > 0x18
	.error "gText_Rom_2638F0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2638F0) < 0x18
	.space 0x18 - (. - gText_Rom_2638F0)
	.endif
