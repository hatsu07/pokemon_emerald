	@ src/battle_dome.c:891 battle_dome_line_891
	.globl gText_Rom_273BA0
gText_Rom_273BA0: @ 0x08273BA0
	.string "あいての ちからを おとすのが とくい。$"
	.if (. - gText_Rom_273BA0) > 0x15
	.error "gText_Rom_273BA0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273BA0) < 0x15
	.space 0x15 - (. - gText_Rom_273BA0)
	.endif
