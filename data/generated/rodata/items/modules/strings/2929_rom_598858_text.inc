	@ src/strings.c:175 gText_TheShop
	.globl gText_Rom_598858
gText_Rom_598858: @ 0x08598858
	.string "ショップ$"
	.if (. - gText_Rom_598858) > 0x5
	.error "gText_Rom_598858 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_598858) < 0x5
	.space 0x5 - (. - gText_Rom_598858)
	.endif

