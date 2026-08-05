	@ src/strings.c:646 gText_SaveCompleted
	.globl gText_Rom_5CBF43
gText_Rom_5CBF43: @ 0x085CBF43
	.string "レポートを かきこみました!$"
	.if (. - gText_Rom_5CBF43) > 0xf
	.error "gText_Rom_5CBF43 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBF43) < 0xf
	.space 0xf - (. - gText_Rom_5CBF43)
	.endif
