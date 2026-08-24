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

	@ src/strings.c:134 gMenuText_Confirm (+2 aliases)
	.globl gText_Rom_591C15
gText_Rom_591C15: @ 0x08591C15
	.string "けってい{EOS}"
	.if (. - gText_Rom_591C15) > 0x5
	.error "gText_Rom_591C15 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_591C15) < 0x5
	.space 0x5 - (. - gText_Rom_591C15)
	.endif

	@ asm/wallclock.s:530 CB2_ViewWallClock
	.globl gText_Rom_591C1A
gText_Rom_591C1A: @ 0x08591C1A
	.string "もどる　{EOS}"
	.if (. - gText_Rom_591C1A) > 0x5
	.error "gText_Rom_591C1A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_591C1A) < 0x5
	.space 0x5 - (. - gText_Rom_591C1A)
	.endif
	.space 0x1, 0x00
