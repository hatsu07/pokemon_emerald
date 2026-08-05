	@ src/strings.c:342 gText_NotAble
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA1C9
gText_Rom_5CA1C9: @ 0x085CA1C9
	.string "でられません$"
	.if (. - gText_Rom_5CA1C9) != 0x7
	.error "gText_Rom_5CA1C9 must retain its original byte length"
	.endif
