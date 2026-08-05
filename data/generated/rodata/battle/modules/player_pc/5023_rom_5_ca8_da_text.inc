	@ src/player_pc.c:184 player_pc_line_184
	.globl gText_Rom_5CA8DA
gText_Rom_5CA8DA: @ 0x085CA8DA
	.string "パソコン に\nどうぐを あずけます$"
	.if (. - gText_Rom_5CA8DA) > 0x12
	.error "gText_Rom_5CA8DA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA8DA) < 0x12
	.space 0x12 - (. - gText_Rom_5CA8DA)
	.endif
