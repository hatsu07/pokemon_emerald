	@ src/roulette.c:430 Roulette_Text_CoinCaseIsFull
	.globl gText_Rom_262DD5
gText_Rom_262DD5: @ 0x08262DD5
	.string "コインが いっぱいです!\nけいひんと こうかん して ください$"
	.if (. - gText_Rom_262DD5) > 0x20
	.error "gText_Rom_262DD5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_262DD5) < 0x20
	.space 0x20 - (. - gText_Rom_262DD5)
	.endif
