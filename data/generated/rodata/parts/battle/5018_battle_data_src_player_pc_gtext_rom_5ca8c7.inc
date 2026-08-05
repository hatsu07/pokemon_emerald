	@ src/player_pc.c:171 sText_WithdrawItem
	.globl gText_Rom_5CA8C7
gText_Rom_5CA8C7: @ 0x085CA8C7
	.string "どうぐを ひきだす$"
	.if (. - gText_Rom_5CA8C7) > 0xa
	.error "gText_Rom_5CA8C7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA8C7) < 0xa
	.space 0xa - (. - gText_Rom_5CA8C7)
	.endif
