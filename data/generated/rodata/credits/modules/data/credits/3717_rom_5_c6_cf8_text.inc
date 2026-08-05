	@ src/data/credits.h:72 sCreditsText_MainProgrammer
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C6CF8
gText_Rom_5C6CF8: @ 0x085C6CF8
	.string "メイン プログラム$"
	.if (. - gText_Rom_5C6CF8) != 0xa
	.error "gText_Rom_5C6CF8 must retain its original byte length"
	.endif
