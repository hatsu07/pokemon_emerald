	@ src/battle_dome.c:910 battle_dome_line_910
	.globl gText_Rom_273D4F
gText_Rom_273D4F: @ 0x08273D4F
	.string "バランスよく いろいろな わざで たちむかう。{EOS}"
	.if (. - gText_Rom_273D4F) > 0x18
	.error "gText_Rom_273D4F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273D4F) < 0x18
	.space 0x18 - (. - gText_Rom_273D4F)
	.endif
