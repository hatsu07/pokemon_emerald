	@ src/player_pc.c:193 player_pc_line_193
	.globl gText_Rom_5CA8A6
gText_Rom_5CA8A6: @ 0x085CA8A6
	.string "もようがえ$"
	.if (. - gText_Rom_5CA8A6) > 0x6
	.error "gText_Rom_5CA8A6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA8A6) < 0x6
	.space 0x6 - (. - gText_Rom_5CA8A6)
	.endif
