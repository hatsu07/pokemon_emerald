	@ src/battle_debug.c:236 sText_HeldItem (+4 aliases)
	.globl gText_Rom_5C93D7
gText_Rom_5C93D7: @ 0x085C93D7
	.string "もちもの{EOS}"
	.if (. - gText_Rom_5C93D7) > 0x5
	.error "gText_Rom_5C93D7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C93D7) < 0x5
	.space 0x5 - (. - gText_Rom_5C93D7)
	.endif
