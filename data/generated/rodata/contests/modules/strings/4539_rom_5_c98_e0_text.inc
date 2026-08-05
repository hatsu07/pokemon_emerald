	@ src/strings.c:223 gText_QuitShopping
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C98E0
gText_Rom_5C98E0: @ 0x085C98E0
	.string "かいもの を やめます$"
	.if (. - gText_Rom_5C98E0) != 0xc
	.error "gText_Rom_5C98E0 must retain its original byte length"
	.endif
