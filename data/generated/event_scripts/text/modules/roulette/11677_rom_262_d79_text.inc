	@ src/roulette.c:426 Roulette_Text_YouveWonXCoins
	.globl gText_Rom_262D79
gText_Rom_262D79: @ 0x08262D79
	.string "おめでとう ございます!\nコイン {STR_VAR_1}まい はいります!$"
	.if (. - gText_Rom_262D79) > 0x1d
	.error "gText_Rom_262D79 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_262D79) < 0x1d
	.space 0x1d - (. - gText_Rom_262D79)
	.endif
