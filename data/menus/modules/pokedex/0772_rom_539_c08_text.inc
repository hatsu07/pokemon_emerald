	@ src/pokedex.c:850 sText_No000
	.globl sText_No000
sText_No000: @ 0x08539C08
	.string "{NO}000{EOS}"
	.if (. - sText_No000) > 0x6
	.error "sText_No000 may not grow beyond its original slot"
	.endif
	.if (. - sText_No000) < 0x6
	.space 0x6 - (. - sText_No000)
	.endif
