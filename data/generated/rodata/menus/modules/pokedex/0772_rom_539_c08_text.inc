	@ src/pokedex.c:850 sText_No000
	.globl gText_Rom_539C08
gText_Rom_539C08: @ 0x08539C08
	.string "{NO}000$"
	.if (. - gText_Rom_539C08) > 0x6
	.error "gText_Rom_539C08 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_539C08) < 0x6
	.space 0x6 - (. - gText_Rom_539C08)
	.endif
