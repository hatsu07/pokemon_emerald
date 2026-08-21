	@ asm/frontier_util.s:4588 sub_081A3B68
	.globl gText_Rom_5ABC6C
gText_Rom_5ABC6C: @ 0x085ABC6C
	.string "　{EOS}"
	.if (. - gText_Rom_5ABC6C) > 0x2
	.error "gText_Rom_5ABC6C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABC6C) < 0x2
	.space 0x2 - (. - gText_Rom_5ABC6C)
	.endif
