	@ asm/tv.s:14076 DoTVShow3CheersForPokeblocks
	.globl gText_Rom_5CBFD3
gText_Rom_5CBFD3: @ 0x085CBFD3
	.string "から$"
	.if (. - gText_Rom_5CBFD3) > 0x3
	.error "gText_Rom_5CBFD3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBFD3) < 0x3
	.space 0x3 - (. - gText_Rom_5CBFD3)
	.endif
