	@ src/strings.c:40 gText_NextBack
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C8E5C
gText_Rom_5C8E5C: @ 0x085C8E5C
	.string "{A_BUTTON}つぎ {B_BUTTON}もどる$"
	.if (. - gText_Rom_5C8E5C) != 0xb
	.error "gText_Rom_5C8E5C must retain its original byte length"
	.endif
