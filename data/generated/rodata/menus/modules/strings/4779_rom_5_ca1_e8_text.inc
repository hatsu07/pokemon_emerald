	@ src/strings.c:346 gText_Have
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA1E8
gText_Rom_5CA1E8: @ 0x085CA1E8
	.string "もっている$"
	.if (. - gText_Rom_5CA1E8) != 0x6
	.error "gText_Rom_5CA1E8 must retain its original byte length"
	.endif
