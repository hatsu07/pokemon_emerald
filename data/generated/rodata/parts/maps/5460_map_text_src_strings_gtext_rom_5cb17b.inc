	@ src/strings.c:530 gText_RankingHall
	.globl gText_Rom_5CB17B
gText_Rom_5CB17B: @ 0x085CB17B
	.string "ランキングホール$"
	.if (. - gText_Rom_5CB17B) > 0x9
	.error "gText_Rom_5CB17B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB17B) < 0x9
	.space 0x9 - (. - gText_Rom_5CB17B)
	.endif
