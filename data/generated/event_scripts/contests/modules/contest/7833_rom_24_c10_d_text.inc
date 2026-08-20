	@ asm/contest.s:11866 sub_080DCBC0 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24C10D
gText_Rom_24C10D: @ 0x0824C10D
	.string "かっこいい　わざ{EOS}"
	.if (. - gText_Rom_24C10D) != 0x9
	.error "gText_Rom_24C10D must retain its original byte length"
	.endif
