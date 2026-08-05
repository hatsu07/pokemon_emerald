	@ src/strings.c:861 gJPText_DecideStop
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CCEDF
gText_Rom_5CCEDF: @ 0x085CCEDF
	.string "{A_BUTTON}けってい {B_BUTTON}やめる$"
	.if (. - gText_Rom_5CCEDF) != 0xd
	.error "gText_Rom_5CCEDF must retain its original byte length"
	.endif
