	@ src/battle_dome.c:885 battle_dome_line_885
	.globl gText_Rom_273B0D
gText_Rom_273B0D: @ 0x08273B0D
	.string "あいてに おうじて たさいな わざで たたかう。{EOS}"
	.if (. - gText_Rom_273B0D) > 0x19
	.error "gText_Rom_273B0D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273B0D) < 0x19
	.space 0x19 - (. - gText_Rom_273B0D)
	.endif
