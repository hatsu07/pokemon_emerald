	@ src/roulette.c:421 Roulette_Text_SpecialRateTable
	.globl gText_Rom_262D23
gText_Rom_262D23: @ 0x08262D23
	.string "ほんじつ このだいでは\nレート アップ じっしちゅう!$"
	.if (. - gText_Rom_262D23) > 0x1c
	.error "gText_Rom_262D23 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_262D23) < 0x1c
	.space 0x1c - (. - gText_Rom_262D23)
	.endif
