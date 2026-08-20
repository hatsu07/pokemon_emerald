	@ src/battle_dome.c:956 battle_dome_line_956
	.globl gText_Rom_2740D0
gText_Rom_2740D0: @ 0x082740D0
	.string "HPには ちからを いれていない!{EOS}"
	.if (. - gText_Rom_2740D0) > 0x12
	.error "gText_Rom_2740D0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2740D0) < 0x12
	.space 0x12 - (. - gText_Rom_2740D0)
	.endif
