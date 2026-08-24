	@ src/pokemon_storage_system.c:933 sText_OutOf30
	.globl sText_OutOf30
sText_OutOf30: @ 0x0854B258
	.string "/30{EOS}"
	.if (. - sText_OutOf30) > 0x4
	.error "sText_OutOf30 may not grow beyond its original slot"
	.endif
	.if (. - sText_OutOf30) < 0x4
	.space 0x4 - (. - sText_OutOf30)
	.endif
