	@ asm/wallclock.s:727 Task_SetClock3
	.globl gText_Rom_591C04
gText_Rom_591C04: @ 0x08591C04
	.string "この　じかんで　よろしいですか？{EOS}"
	.if (. - gText_Rom_591C04) > 0x11
	.error "gText_Rom_591C04 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_591C04) < 0x11
	.space 0x11 - (. - gText_Rom_591C04)
	.endif
