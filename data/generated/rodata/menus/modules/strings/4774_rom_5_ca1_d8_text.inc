	@ src/strings.c:344 gText_NotAble2
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA1D8
gText_Rom_5CA1D8: @ 0x085CA1D8
	.string "おぼえられない$"
	.if (. - gText_Rom_5CA1D8) != 0x8
	.error "gText_Rom_5CA1D8 must retain its original byte length"
	.endif
