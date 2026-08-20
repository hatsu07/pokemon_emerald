	@ asm/contest.s:11866 sub_080DCBC0 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24C116
gText_Rom_24C116: @ 0x0824C116
	.string "うつくしい　わざ{EOS}"
	.if (. - gText_Rom_24C116) != 0x9
	.error "gText_Rom_24C116 must retain its original byte length"
	.endif
