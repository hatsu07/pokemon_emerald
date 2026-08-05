	@ src/roulette.c:425 Roulette_Text_NothingDoing
	.globl gText_Rom_262D74
gText_Rom_262D74: @ 0x08262D74
	.string "はずれー$"
	.if (. - gText_Rom_262D74) > 0x5
	.error "gText_Rom_262D74 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_262D74) < 0x5
	.space 0x5 - (. - gText_Rom_262D74)
	.endif
