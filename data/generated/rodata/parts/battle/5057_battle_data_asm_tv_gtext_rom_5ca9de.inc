	@ asm/tv.s:8388 GetMomOrDadStringForTVMessage
	.globl gText_Rom_5CA9DE
gText_Rom_5CA9DE: @ 0x085CA9DE
	.string "パパ$"
	.if (. - gText_Rom_5CA9DE) > 0x3
	.error "gText_Rom_5CA9DE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA9DE) < 0x3
	.space 0x3 - (. - gText_Rom_5CA9DE)
	.endif
