	@ src/data/credits.h:98 sCreditsText_WorldDirector
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C6E19
gText_Rom_5C6E19: @ 0x085C6E19
	.string "ワールド ディレクター$"
	.if (. - gText_Rom_5C6E19) != 0xc
	.error "gText_Rom_5C6E19 must retain its original byte length"
	.endif
