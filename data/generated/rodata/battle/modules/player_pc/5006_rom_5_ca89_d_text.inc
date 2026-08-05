	@ src/player_pc.c:194 player_pc_line_194
	.globl gText_Rom_5CA89D
gText_Rom_5CA89D: @ 0x085CA89D
	.string "せつぞくを きる$"
	.if (. - gText_Rom_5CA89D) > 0x9
	.error "gText_Rom_5CA89D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA89D) < 0x9
	.space 0x9 - (. - gText_Rom_5CA89D)
	.endif
