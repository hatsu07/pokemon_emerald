	@ asm/reset_rtc_screen.s:427 PrintTime
	.globl gText_Rom_4E8A6C
gText_Rom_4E8A6C: @ 0x084E8A6C
	.string "にち$"
	.if (. - gText_Rom_4E8A6C) > 0x3
	.error "gText_Rom_4E8A6C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_4E8A6C) < 0x3
	.space 0x3 - (. - gText_Rom_4E8A6C)
	.endif
