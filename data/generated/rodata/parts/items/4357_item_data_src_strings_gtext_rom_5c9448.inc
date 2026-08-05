	@ src/strings.c:158 gText_CloseBag
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C9448
gText_Rom_5C9448: @ 0x085C9448
	.string "バッグをとじる$"
	.if (. - gText_Rom_5C9448) != 0x8
	.error "gText_Rom_5C9448 must retain its original byte length"
	.endif
