	@ src/battle_debug.c:236 sText_HeldItem (+4 aliases)
	.globl sText_HeldItem
sText_HeldItem: @ 0x085C93D7
	.string "もちもの{EOS}"
	.if (. - sText_HeldItem) > 0x5
	.error "sText_HeldItem may not grow beyond its original slot"
	.endif
	.if (. - sText_HeldItem) < 0x5
	.space 0x5 - (. - sText_HeldItem)
	.endif
