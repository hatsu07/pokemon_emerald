	@ src/battle_dome.c:952 battle_dome_line_952
	.globl gText_Rom_27406C
gText_Rom_27406C: @ 0x0827406C
	.string "ぼうぎょと とくぼうに ちからを いれていない!$"
	.if (. - gText_Rom_27406C) > 0x19
	.error "gText_Rom_27406C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27406C) < 0x19
	.space 0x19 - (. - gText_Rom_27406C)
	.endif
