	@ src/battle_dome.c:894 battle_dome_line_894
	.globl gText_Rom_273BE3
gText_Rom_273BE3: @ 0x08273BE3
	.string "PPの すくない おおわざで しょうぶする。$"
	.if (. - gText_Rom_273BE3) > 0x17
	.error "gText_Rom_273BE3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273BE3) < 0x17
	.space 0x17 - (. - gText_Rom_273BE3)
	.endif
