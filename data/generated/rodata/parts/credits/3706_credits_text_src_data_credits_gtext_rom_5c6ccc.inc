	@ src/data/credits.h:68 sCreditsText_ExecutiveDirector
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C6CCC
gText_Rom_5C6CCC: @ 0x085C6CCC
	.string "エグゼクティブ ディレクター$"
	.if (. - gText_Rom_5C6CCC) != 0xf
	.error "gText_Rom_5C6CCC must retain its original byte length"
	.endif
