	@ src/roulette.c:423 Roulette_Text_ItsAHit
	.globl gText_Rom_262D66
gText_Rom_262D66: @ 0x08262D66
	.string "あたりー!$"
	.if (. - gText_Rom_262D66) > 0x6
	.error "gText_Rom_262D66 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_262D66) < 0x6
	.space 0x6 - (. - gText_Rom_262D66)
	.endif
