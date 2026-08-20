	@ asm/contest.s:11866 sub_080DCBC0 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24C11F
gText_Rom_24C11F: @ 0x0824C11F
	.string "かわいい　わざ{EOS}"
	.if (. - gText_Rom_24C11F) != 0x8
	.error "gText_Rom_24C11F must retain its original byte length"
	.endif
