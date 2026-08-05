	@ src/roulette.c:428 Roulette_Text_KeepPlaying
	.globl gText_Rom_262DA3
gText_Rom_262DA3: @ 0x08262DA3
	.string "つづけて あそびますか?$"
	.if (. - gText_Rom_262DA3) > 0xd
	.error "gText_Rom_262DA3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_262DA3) < 0xd
	.space 0xd - (. - gText_Rom_262DA3)
	.endif
