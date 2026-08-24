	@ src/strings.c:111 gText_DexSearchDontSpecify
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_DexSearchDontSpecify
gText_DexSearchDontSpecify: @ 0x085C928E
	.string "してい しない{EOS}"
	.if (. - gText_DexSearchDontSpecify) != 0x8
	.error "gText_DexSearchDontSpecify must retain its original byte length"
	.endif
