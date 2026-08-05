	@ src/player_pc.c:231 player_pc_line_231
	.globl gText_Rom_5CA962
gText_Rom_5CA962: @ 0x085CA962
	.string "バッグに もどす$"
	.if (. - gText_Rom_5CA962) > 0x9
	.error "gText_Rom_5CA962 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA962) < 0x9
	.space 0x9 - (. - gText_Rom_5CA962)
	.endif
