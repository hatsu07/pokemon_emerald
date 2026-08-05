	@ src/battle_dome.c:960 battle_dome_line_960
	.globl gText_Rom_27411E
gText_Rom_27411E: @ 0x0827411E
	.string "とくこうには ちからを いれていない!$"
	.if (. - gText_Rom_27411E) > 0x14
	.error "gText_Rom_27411E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27411E) < 0x14
	.space 0x14 - (. - gText_Rom_27411E)
	.endif
