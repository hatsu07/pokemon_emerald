	@ src/strings.c:111 gText_DexSearchDontSpecify
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C928E
gText_Rom_5C928E: @ 0x085C928E
	.string "してい しない{EOS}"
	.if (. - gText_Rom_5C928E) != 0x8
	.error "gText_Rom_5C928E must retain its original byte length"
	.endif
