	@ src/player_pc.c:191 player_pc_line_191
	.globl gText_Rom_5CA8AC
gText_Rom_5CA8AC: @ 0x085CA8AC
	.string "どうぐ あずかり$"
	.if (. - gText_Rom_5CA8AC) > 0x9
	.error "gText_Rom_5CA8AC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA8AC) < 0x9
	.space 0x9 - (. - gText_Rom_5CA8AC)
	.endif
