	@ src/data/credits.h:89 sCreditsText_EnvAndToolPgrms
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C6DB3
gText_Rom_5C6DB3: @ 0x085C6DB3
	.string "かんきょう/ツール プログラム$"
	.if (. - gText_Rom_5C6DB3) != 0x10
	.error "gText_Rom_5C6DB3 must retain its original byte length"
	.endif
