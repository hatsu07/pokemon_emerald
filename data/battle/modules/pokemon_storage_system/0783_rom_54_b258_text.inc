	@ src/pokemon_storage_system.c:933 sText_OutOf30
	.globl gText_Rom_54B258
gText_Rom_54B258: @ 0x0854B258
	.string "/30{EOS}"
	.if (. - gText_Rom_54B258) > 0x4
	.error "gText_Rom_54B258 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_54B258) < 0x4
	.space 0x4 - (. - gText_Rom_54B258)
	.endif
