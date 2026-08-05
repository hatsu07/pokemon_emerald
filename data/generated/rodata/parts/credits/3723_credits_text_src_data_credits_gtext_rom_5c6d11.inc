	@ src/data/credits.h:74 sCreditsText_FieldSystemPgrms
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C6D11
gText_Rom_5C6D11: @ 0x085C6D11
	.string "フィールド システム プログラム$"
	.if (. - gText_Rom_5C6D11) != 0x11
	.error "gText_Rom_5C6D11 must retain its original byte length"
	.endif
