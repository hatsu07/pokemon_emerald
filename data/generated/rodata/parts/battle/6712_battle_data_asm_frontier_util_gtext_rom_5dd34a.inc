	@ asm/frontier_util.s:1165 ShowDomeResultsWindow
	.globl gText_Rom_5DD34A
gText_Rom_5DD34A: @ 0x085DD34A
	.string "{0xFD}{0x01}　の　シングル　バトルトーナメント　せいせき$"
	.if (. - gText_Rom_5DD34A) > 0x19
	.error "gText_Rom_5DD34A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DD34A) < 0x19
	.space 0x19 - (. - gText_Rom_5DD34A)
	.endif
