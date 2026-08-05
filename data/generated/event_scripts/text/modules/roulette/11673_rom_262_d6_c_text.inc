	@ src/roulette.c:424 Roulette_Text_Jackpot
	.globl gText_Rom_262D6C
gText_Rom_262D6C: @ 0x08262D6C
	.string "おおあたり!!$"
	.if (. - gText_Rom_262D6C) > 0x8
	.error "gText_Rom_262D6C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_262D6C) < 0x8
	.space 0x8 - (. - gText_Rom_262D6C)
	.endif
