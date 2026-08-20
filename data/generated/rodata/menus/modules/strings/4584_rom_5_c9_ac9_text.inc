	@ src/strings.c:337 gText_Able
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C9AC9
gText_Rom_5C9AC9: @ 0x085C9AC9
	.string "さんかしない{EOS}"
	.if (. - gText_Rom_5C9AC9) != 0x7
	.error "gText_Rom_5C9AC9 must retain its original byte length"
	.endif
