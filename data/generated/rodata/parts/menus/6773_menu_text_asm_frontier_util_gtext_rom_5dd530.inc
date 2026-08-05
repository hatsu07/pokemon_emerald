	@ asm/frontier_util.s:5500 Print1PRecord (+1 aliases)
	.globl gText_Rom_5DD530
gText_Rom_5DD530: @ 0x085DD530
	.string "{0xFD}{0x03}だん　せいは$"
	.if (. - gText_Rom_5DD530) > 0x9
	.error "gText_Rom_5DD530 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DD530) < 0x9
	.space 0x9 - (. - gText_Rom_5DD530)
	.endif
	.space 0x3, 0x00
