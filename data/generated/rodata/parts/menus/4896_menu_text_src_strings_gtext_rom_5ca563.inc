	@ src/strings.c:404 gText_XNature
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA563
gText_Rom_5CA563: @ 0x085CA563
	.string "{DYNAMIC 0}{DYNAMIC 2}{DYNAMIC 1}{DYNAMIC 5}せいかく$"
	.if (. - gText_Rom_5CA563) != 0xd
	.error "gText_Rom_5CA563 must retain its original byte length"
	.endif
