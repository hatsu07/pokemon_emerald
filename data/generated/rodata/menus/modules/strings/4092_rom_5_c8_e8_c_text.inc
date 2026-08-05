	@ src/strings.c:43 gText_AButtonExit
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C8E8C
gText_Rom_5C8E8C: @ 0x085C8E8C
	.string "{A_BUTTON}おわる$"
	.if (. - gText_Rom_5C8E8C) != 0x6
	.error "gText_Rom_5C8E8C must retain its original byte length"
	.endif
