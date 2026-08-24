
	@ src/use_pokeblock.c:163 sText_NatureSlash
	.globl sText_NatureSlash
sText_NatureSlash: @ 0x085CB7A2
	.string "せいかく/{EOS}"
	.if (. - sText_NatureSlash) > 0x6
	.error "sText_NatureSlash may not grow beyond its original slot"
	.endif
	.if (. - sText_NatureSlash) < 0x6
	.space 0x6 - (. - sText_NatureSlash)
	.endif

