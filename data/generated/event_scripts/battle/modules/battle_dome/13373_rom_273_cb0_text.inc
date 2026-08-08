	@ src/battle_dome.c:903 battle_dome_line_903
	.globl gText_Rom_273CB0
gText_Rom_273CB0: @ 0x08273CB0
	.string "きょうりょくな コンボになる わざを もつ。$"
	.if (. - gText_Rom_273CB0) > 0x17
	.error "gText_Rom_273CB0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273CB0) < 0x17
	.space 0x17 - (. - gText_Rom_273CB0)
	.endif
