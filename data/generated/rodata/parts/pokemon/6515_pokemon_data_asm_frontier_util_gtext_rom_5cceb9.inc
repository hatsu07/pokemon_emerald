	@ asm/frontier_util.s:2944 PrintHallRecords
	.globl gText_Rom_5CCEB9
gText_Rom_5CCEB9: @ 0x085CCEB9
	.string "1い$"
	.if (. - gText_Rom_5CCEB9) > 0x3
	.error "gText_Rom_5CCEB9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCEB9) < 0x3
	.space 0x3 - (. - gText_Rom_5CCEB9)
	.endif
