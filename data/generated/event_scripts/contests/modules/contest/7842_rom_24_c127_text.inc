	@ asm/contest.s:11866 sub_080DCBC0 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24C127
gText_Rom_24C127: @ 0x0824C127
	.string "かしこい　わざ$"
	.if (. - gText_Rom_24C127) != 0x8
	.error "gText_Rom_24C127 must retain its original byte length"
	.endif
