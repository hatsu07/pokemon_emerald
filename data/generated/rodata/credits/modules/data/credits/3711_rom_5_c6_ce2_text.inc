	@ src/data/credits.h:70 sCreditsText_ArtDirector
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C6CE2
gText_Rom_5C6CE2: @ 0x085C6CE2
	.string "アート ディレクター$"
	.if (. - gText_Rom_5C6CE2) != 0xb
	.error "gText_Rom_5C6CE2 must retain its original byte length"
	.endif
