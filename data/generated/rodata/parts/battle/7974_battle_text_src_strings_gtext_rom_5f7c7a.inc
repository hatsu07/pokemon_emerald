	@ src/strings.c:381 gText_Jam (+1 aliases)
	.globl gText_Rom_5F7C7A
gText_Rom_5F7C7A: @ 0x085F7C7A
	.string "ぼうがい$"
	.if (. - gText_Rom_5F7C7A) > 0x5
	.error "gText_Rom_5F7C7A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F7C7A) < 0x5
	.space 0x5 - (. - gText_Rom_5F7C7A)
	.endif
	.space 0x1, 0x00
