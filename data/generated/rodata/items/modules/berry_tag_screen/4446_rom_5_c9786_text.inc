	@ asm/berry_tag_screen.s:684 sub_0817804C
	.globl gText_Rom_5C9786
gText_Rom_5C9786: @ 0x085C9786
	.string "{0xFD}{0x02},{0xFD}{0x03}cm$"
	.if (. - gText_Rom_5C9786) > 0x8
	.error "gText_Rom_5C9786 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9786) < 0x8
	.space 0x8 - (. - gText_Rom_5C9786)
	.endif
