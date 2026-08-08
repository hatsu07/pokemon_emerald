	@ src/battle_dome.c:886 battle_dome_line_886
	.globl gText_Rom_273B26
gText_Rom_273B26: @ 0x08273B26
	.string "かちパターンを もっていて はまると つよい。$"
	.if (. - gText_Rom_273B26) > 0x18
	.error "gText_Rom_273B26 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273B26) < 0x18
	.space 0x18 - (. - gText_Rom_273B26)
	.endif
