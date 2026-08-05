	@ src/roulette.c:419 Roulette_Text_PlayMinimumWagerIsX
	.globl gText_Rom_262CF3
gText_Rom_262CF3: @ 0x08262CF3
	.string "ここは レート{STR_VAR_1}の ルーレットだい です\nルーレットで あそびますか?$"
	.if (. - gText_Rom_262CF3) > 0x25
	.error "gText_Rom_262CF3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_262CF3) < 0x25
	.space 0x25 - (. - gText_Rom_262CF3)
	.endif
