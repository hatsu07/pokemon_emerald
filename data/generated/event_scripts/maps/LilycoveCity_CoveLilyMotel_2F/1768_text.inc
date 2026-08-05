	@ data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.inc:74 LilycoveCity_CoveLilyMotel_2F_Text_ImTheProgrammer
	.globl gText_Rom_2059DF
gText_Rom_2059DF: @ 0x082059DF
	.string "おれさま?\pプログラマーだよ! こっちの\nスロットは どんなのか たのしみだな!$"
	.if (. - gText_Rom_2059DF) > 0x29
	.error "gText_Rom_2059DF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2059DF) < 0x29
	.space 0x29 - (. - gText_Rom_2059DF)
	.endif
