	@ src/strings.c:381 gText_Jam (+1 aliases)
	.globl gText_Rom_5CA3B0
gText_Rom_5CA3B0: @ 0x085CA3B0
	.string "ぼうがい$"
	.if (. - gText_Rom_5CA3B0) > 0x5
	.error "gText_Rom_5CA3B0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA3B0) < 0x5
	.space 0x5 - (. - gText_Rom_5CA3B0)
	.endif
