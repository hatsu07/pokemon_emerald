	@ src/data/credits.h:87 sCreditsText_ParametricDesigners
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C6D9E
gText_Rom_5C6D9E: @ 0x085C6D9E
	.string "パラメーター せってい$"
	.if (. - gText_Rom_5C6D9E) != 0xc
	.error "gText_Rom_5C6D9E must retain its original byte length"
	.endif
