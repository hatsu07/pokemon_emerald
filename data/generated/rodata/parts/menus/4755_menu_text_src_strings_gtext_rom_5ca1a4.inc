	@ src/strings.c:336 gText_NoUse
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA1A4
gText_Rom_5CA1A4: @ 0x085CA1A4
	.string "つかえません$"
	.if (. - gText_Rom_5CA1A4) != 0x7
	.error "gText_Rom_5CA1A4 must retain its original byte length"
	.endif
