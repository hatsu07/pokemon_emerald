	@ src/strings.c:347 gText_DontHave
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA1EE
gText_Rom_5CA1EE: @ 0x085CA1EE
	.string "もっていない$"
	.if (. - gText_Rom_5CA1EE) != 0x7
	.error "gText_Rom_5CA1EE must retain its original byte length"
	.endif
