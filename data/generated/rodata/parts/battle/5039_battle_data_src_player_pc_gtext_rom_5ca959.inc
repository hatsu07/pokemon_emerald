	@ src/player_pc.c:230 player_pc_line_230
	.globl gText_Rom_5CA959
gText_Rom_5CA959: @ 0x085CA959
	.string "ないようを よむ$"
	.if (. - gText_Rom_5CA959) > 0x9
	.error "gText_Rom_5CA959 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA959) < 0x9
	.space 0x9 - (. - gText_Rom_5CA959)
	.endif
