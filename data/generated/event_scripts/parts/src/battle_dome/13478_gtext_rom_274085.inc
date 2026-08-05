	@ src/battle_dome.c:953 battle_dome_line_953
	.globl gText_Rom_274085
gText_Rom_274085: @ 0x08274085
	.string "すばやさと とくこうに ちからを いれていない!$"
	.if (. - gText_Rom_274085) > 0x19
	.error "gText_Rom_274085 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274085) < 0x19
	.space 0x19 - (. - gText_Rom_274085)
	.endif
