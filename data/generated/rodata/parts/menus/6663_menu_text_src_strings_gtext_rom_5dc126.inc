	@ src/strings.c:1016 gText_Accept (+1 aliases)
	.globl gText_Rom_5DC126
gText_Rom_5DC126: @ 0x085DC126
	.string "うけとる$"
	.if (. - gText_Rom_5DC126) > 0x5
	.error "gText_Rom_5DC126 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DC126) < 0x5
	.space 0x5 - (. - gText_Rom_5DC126)
	.endif
