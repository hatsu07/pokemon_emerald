	@ src/battle_dome.c:888 battle_dome_line_888
	.globl gText_Rom_273B56
gText_Rom_273B56: @ 0x08273B56
	.string "いひょうを つく わざで たたかいを みだす。{EOS}"
	.if (. - gText_Rom_273B56) > 0x18
	.error "gText_Rom_273B56 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273B56) < 0x18
	.space 0x18 - (. - gText_Rom_273B56)
	.endif
