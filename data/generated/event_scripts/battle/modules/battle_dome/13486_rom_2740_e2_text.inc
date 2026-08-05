	@ src/battle_dome.c:957 battle_dome_line_957
	.globl gText_Rom_2740E2
gText_Rom_2740E2: @ 0x082740E2
	.string "こうげきには ちからを いれていない!$"
	.if (. - gText_Rom_2740E2) > 0x14
	.error "gText_Rom_2740E2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2740E2) < 0x14
	.space 0x14 - (. - gText_Rom_2740E2)
	.endif
