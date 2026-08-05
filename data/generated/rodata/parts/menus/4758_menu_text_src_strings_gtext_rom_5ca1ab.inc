	@ src/strings.c:337 gText_Able
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA1AB
gText_Rom_5CA1AB: @ 0x085CA1AB
	.string "さんかしない$"
	.if (. - gText_Rom_5CA1AB) != 0x7
	.error "gText_Rom_5CA1AB must retain its original byte length"
	.endif
