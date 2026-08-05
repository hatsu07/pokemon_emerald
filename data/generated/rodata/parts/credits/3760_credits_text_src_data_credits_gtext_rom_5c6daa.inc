	@ src/data/credits.h:88 sCreditsText_PokedexText
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C6DAA
gText_Rom_5C6DAA: @ 0x085C6DAA
	.string "ずかん テキスト$"
	.if (. - gText_Rom_5C6DAA) != 0x9
	.error "gText_Rom_5C6DAA must retain its original byte length"
	.endif
