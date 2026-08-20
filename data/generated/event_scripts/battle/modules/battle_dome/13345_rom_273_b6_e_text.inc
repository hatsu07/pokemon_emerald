	@ src/battle_dome.c:889 battle_dome_line_889
	.globl gText_Rom_273B6E
gText_Rom_273B6E: @ 0x08273B6E
	.string "つねに たいりょくに きを くばって たたかう。{EOS}"
	.if (. - gText_Rom_273B6E) > 0x19
	.error "gText_Rom_273B6E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273B6E) < 0x19
	.space 0x19 - (. - gText_Rom_273B6E)
	.endif
