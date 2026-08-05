	@ asm/tv.s:8326 GetMomOrDadStringForTVMessage
	.globl gText_Rom_5CA9E1
gText_Rom_5CA9E1: @ 0x085CA9E1
	.string "ママ$"
	.if (. - gText_Rom_5CA9E1) > 0x3
	.error "gText_Rom_5CA9E1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA9E1) < 0x3
	.space 0x3 - (. - gText_Rom_5CA9E1)
	.endif
