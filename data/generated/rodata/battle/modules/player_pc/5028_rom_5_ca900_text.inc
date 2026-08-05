	@ src/player_pc.c:185 player_pc_line_185
	.globl gText_Rom_5CA900
gText_Rom_5CA900: @ 0x085CA900
	.string "パソコン に あずけている\nどうぐを すてます$"
	.if (. - gText_Rom_5CA900) > 0x18
	.error "gText_Rom_5CA900 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA900) < 0x18
	.space 0x18 - (. - gText_Rom_5CA900)
	.endif
