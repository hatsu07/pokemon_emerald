	@ src/strings.c:1102 gText_PlayersBattleResults
	.globl gText_Rom_5937E0
gText_Rom_5937E0: @ 0x085937E0
	.string "{PLAYER} の たいせん せいせき$"
	.if (. - gText_Rom_5937E0) > 0xf
	.error "gText_Rom_5937E0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5937E0) < 0xf
	.space 0xf - (. - gText_Rom_5937E0)
	.endif
