	@ src/strings.c:605 gText_GoodSaying
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CBBFD
gText_Rom_5CBBFD: @ 0x085CBBFD
	.string "いい ことば$"
	.if (. - gText_Rom_5CBBFD) != 0x7
	.error "gText_Rom_5CBBFD must retain its original byte length"
	.endif
