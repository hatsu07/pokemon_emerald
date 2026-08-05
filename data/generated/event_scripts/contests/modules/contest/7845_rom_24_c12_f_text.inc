	@ asm/contest.s:11866 sub_080DCBC0 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24C12F
gText_Rom_24C12F: @ 0x0824C12F
	.string "たくましい　わざ$"
	.if (. - gText_Rom_24C12F) != 0x9
	.error "gText_Rom_24C12F must retain its original byte length"
	.endif
