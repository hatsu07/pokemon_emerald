	@ src/strings.c:787 gText_SymbolsEarned
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CCA93
gText_Rom_5CCA93: @ 0x085CCA93
	.string "てにいれた シンボル$"
	.if (. - gText_Rom_5CCA93) != 0xb
	.error "gText_Rom_5CCA93 must retain its original byte length"
	.endif
