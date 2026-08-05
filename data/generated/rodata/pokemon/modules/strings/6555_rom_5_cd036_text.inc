	@ src/strings.c:875 gJPText_PleaseWaitAMoment
	.globl gText_Rom_5CD036
gText_Rom_5CD036: @ 0x085CD036
	.string "しばらく おまちください$"
	.if (. - gText_Rom_5CD036) > 0xd
	.error "gText_Rom_5CD036 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CD036) < 0xd
	.space 0xd - (. - gText_Rom_5CD036)
	.endif
