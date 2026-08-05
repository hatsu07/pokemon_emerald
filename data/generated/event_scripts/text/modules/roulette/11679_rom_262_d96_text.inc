	@ src/roulette.c:427 Roulette_Text_NoCoinsLeft
	.globl gText_Rom_262D96
gText_Rom_262D96: @ 0x08262D96
	.string "コインが なくなりました$"
	.if (. - gText_Rom_262D96) > 0xd
	.error "gText_Rom_262D96 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_262D96) < 0xd
	.space 0xd - (. - gText_Rom_262D96)
	.endif
