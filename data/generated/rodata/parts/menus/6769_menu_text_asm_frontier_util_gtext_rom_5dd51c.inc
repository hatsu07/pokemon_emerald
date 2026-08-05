	@ asm/frontier_util.s:5500 Print1PRecord (+1 aliases)
	.globl gText_Rom_5DD51C
gText_Rom_5DD51C: @ 0x085DD51C
	.string "{0xFD}{0x03}へや　とっぱ$"
	.if (. - gText_Rom_5DD51C) > 0x9
	.error "gText_Rom_5DD51C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DD51C) < 0x9
	.space 0x9 - (. - gText_Rom_5DD51C)
	.endif
	.space 0x3, 0x00
